/*
 *    This file is the source file for our c program.
 *    This file is made with the combined effort of:
 *    Bata, Gian Carlo
 *    Parato, Lei
 *    Tanay, Gillian
 */

// libraries included
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

// defining constant variables
// ITEMS are the number of items that are offered
#define ITEMS 55
// EGGS are the number of easter eggs that are in the program
#define EGGS 17

// the data structure for every food item that is offered
typedef struct
{
    char *name;
    int price;
    char code[2];
}
food;

// the array of phrases that will be treated as easter eggs
char *easter_eggs[EGGS] = {"We offer unli-rice", 
                        "Water is absolutely free",
                        "Good food, good mood",
			"Cooking is love made visible",
			"Life is what you COOKED it",
			"Speak with the taste", 
			"Paradize on your plate",
			"My kitchen, my rules",
			"Food is an ART",
			"Good food ends with good talk",
			"Pour some sugar on me",
			"May the fork be with you",
			"Cooking with love provides food for the soul",
			"Wake up, it's food o'clock",
			"We offer coffee, don't worry"
			"Not too much sugar",
			"Spicy!"};

// declaring an array of foods
food foods[ITEMS];

// an array of item names that will be the names of the items in the foods array
const char *names[ITEMS] = {"Pinangat", "Picadillo", "Dinuguan", 
                        "Bicol Express", "Kandingga", "Laing", 
			"Sinantol", "Ginataang Lambong", "Tilmok", 
			"Sinarapan (Tabyos)", "Kinonot", "Kusido", 
			"Ginataang Langka", "Ginataang puso ng saging",
			"Ginataang Tambakol", "Spicy tahong", 
			"Chili chocolate base w/ caramel filling", 
			"Spicy pili affogato", "Bicol express dessert", 
			"Sili ice cream", "Chili cheesecake", "Chili mocha", 
			"Pili caramel cake", "Pili nut pesto", "Sinapot", 
			"Linubak", "Puto bukayo", "Kalingking", 
			"Chakoy", "Turon", "Biniribid", 
			"Banana cue", "Tabog-tabog", "Baduya", 
			"Pinakbo", "Binutong", "Manduya", "Ginatan", "Pichi-pichi", 
			"Pepsi", "Coca Cola", "Royal", "Mountain Dew", 
			"Watermelon lychee granita", "Kiwi juice", "Mango Juice",
			"Pineapple juice", "Milk tea", "Green tea", "Caffe Americano", "Kapeng barako", 
			"Cappuccino", "Tequila Sunrise", "GSM Blue Mojito", 
			"San Miguel Pale Pilsen Beer"};

// an array of item prices that will be the prices of the items in the foods array
const int prices[ITEMS] = {95, 100, 125, 200, 150, 
			80, 80, 80, 110, 85, 
			95, 150, 85, 85, 100, 
			160, 170, 159, 160, 150, 
			157, 145, 165, 125, 50, 
			55, 49, 50, 45, 50, 
			48, 50, 48, 60, 65, 
			50, 45, 65, 45, 18,
			18, 18, 18, 85, 89,
			92, 79, 85, 90, 140,
			97, 120, 80, 110, 60};

// an array of item code that will be the code of the items in the foods array
const char codes[ITEMS][2] = {{'0', '1'}, {'0', '2'}, {'0', '3'}, {'0', '4'}, {'0', '5'}, 
			{'0', '6'}, {'0', '7'}, {'0', '8'}, {'0', '9'}, {'1', '0'}, 
			{'1', '1'}, {'1', '2'}, {'1', '3'}, {'1', '4'}, {'1', '5'},
			{'1', '6'}, {'1', '7'}, {'1', '8'}, {'1', '9'}, {'2', '0'}, 
			{'2', '1'}, {'2', '2'}, {'2', '3'}, {'2', '4'}, {'2', '5'}, 
			{'2', '6'}, {'2', '7'}, {'2', '8'}, {'2', '9'}, {'3', '0'}, 
			{'3', '1'}, {'3', '2'}, {'3', '3'}, {'3', '4'}, {'3', '5'}, 
			{'3', '6'}, {'3', '7'}, {'3', '8'}, {'3', '9'}, {'4', '0'},
			{'4', '1'}, {'4', '2'}, {'4', '3'}, {'4', '4'}, {'4', '5'},
			{'4', '6'}, {'4', '7'}, {'4', '8'}, {'4', '9'}, {'5', '0'}, 
			{'5', '1'}, {'5', '2'}, {'5', '3'}, {'5', '4'}, {'5', '5'}};

// the main function
int main(void)
{
    // pseudo-random number seed
    srand(time(NULL));
	
    // the initialization for the foods array
    for (int i = 0; i < ITEMS; i++)
    {
	foods[i].name = names[i];
	foods[i].price = prices[i];
	foods[i].code[0]  = codes[i][0];
	foods[i].code[1]  = codes[i][1];
    }
	
    // About the program
    puts("Siling Probinsya Order Taker");
    puts("Copyright (c) 2021 Arsinoe-Z et alia. All rights reserved.\n");
    printf("Press any key to continue... ");
    getch();
    system("cls");
	
    // Welcome display
    puts("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
    puts(".*         Welcome to Siling Probinsya         *.");
    puts("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
	
    // order prompt
    puts("\nPlease take your order!\n");
	
    // menu printer
    for (int i = 0; i < ITEMS; i++)
    {
	// the item code
	printf("Code: %s    ", foods[i].code);
	// the item price
	printf("Php: %i   ", foods[i].price);
	// space for consistency
	if (foods[i].price < 100)
	{
	    printf(" ");
	}
	// the item name
	printf("%s\n", foods[i].name);
    }
	
    // easter egg implementation
    char *random = easter_eggs[rand() % EGGS];
    printf("\n%s\n", random);
	
    // variables for later use
    // total price to be paid that will be updated every order
    int total = 0;
	
    // variable for xth order
    int x = 1;
	
    // a flag for control flow
    int flag = 0;
	
    // new line
    puts("");
    // order prompt 
    ORDER: if (flag == 0)
    {
	printf("Would you like to make an order? [y/n]: ");
    }
    else
    {
	printf("Would you like to make another order? [y/n]: ");
    }
    char c;
    scanf("%c", &c);
    while (getchar() != '\n');
    if (c != 'Y' && c != 'y' && c != 'N' && c != 'n')
    {
	goto ORDER;
    }	
    if (c == 'y' || c == 'Y')
    {
	// a loop that goes to infinity and will only end if the user wants to
	for (;;)
	{
	    // a prompt for order number x
	    FORFLAG: printf("Order no.%i: ", x);
	    char ch[2];
	    // code input
	    scanf("%s", &ch);
	    while (getchar() != '\n');
	    // loop for code validation
	    for (int j = 0; j < ITEMS; j++)
	    {
		// loop through the foods code to see if any of the codes match
		if (strcmp(foods[j].code, ch) == 0)
		{
		    // prints the price of the item that matchs
		    printf("Php: %i   ", foods[j].price);
		    // a space for consistency
		    if (foods[j].price < 100)
		    {
			printf(" ");
		    }
		    // prints the name of the item the matchs
		    printf("%s\n", foods[j].name);
		    // update the total price
		    total += foods[j].price;
		    // setting flag for control flow
		    flag = 1;
		    // break loop and flag remains 1
		    break;
		}
	        // setting flag for control flow
	        flag = 0;
	    }
	    // if else statement depending on the value of flag
	    if (flag == 1 )
	    {
	        x++;
	    }
	    else
	    {
	        goto FORFLAG;
	    }
            goto ORDER;
	}
    }
    // prints the price owed by customer and exits program
    printf("\n\nThe total price is Php: %i\n", total);
    puts("Thank you! Come again!");
    return 0;
}
