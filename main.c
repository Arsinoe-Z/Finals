#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>

#define ITEMS 39
#define EGGS 17

typedef struct
{
	char *name;
	int price;
	char code[2];
} food;

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

food foods[ITEMS];
char *names[ITEMS] = {"Pinangat", "Picadillo", "Dinuguan", 
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
		"Pinakbo", "Binutong", "Manduya", "Ginatan", "Pichi-pichi"};
int prices[ITEMS] = {95, 100, 125, 200, 150, 
		80, 80, 80, 110, 85, 
		95, 150, 85, 85, 100, 
		160, 170, 159, 160, 150, 
		157, 145, 165, 125, 50, 
		55, 49, 50, 45, 50, 
		48, 50, 48, 60, 65, 
		50, 45, 65, 45};
char codes[ITEMS][2] = {{'0', '1'}, {'0', '2'}, {'0', '3'}, {'0', '4'}, {'0', '5'}, 
		{'0', '6'}, {'0', '7'}, {'0', '8'}, {'0', '9'}, {'1', '0'}, 
		{'1', '1'}, {'1', '2'}, {'1', '3'}, {'1', '4'}, {'1', '5'},
		{'1', '6'}, {'1', '7'}, {'1', '8'}, {'1', '9'}, {'2', '0'}, 
		{'2', '1'}, {'2', '2'}, {'2', '3'}, {'2', '4'}, {'2', '5'}, 
		{'2', '6'}, {'2', '7'}, {'2', '8'}, {'2', '9'}, {'3', '0'}, 
		{'3', '1'}, {'3', '2'}, {'3', '3'}, {'3', '4'}, {'3', '5'}, 
		{'3', '6'}, {'3', '7'}, {'3', '8'}, {'3', '9'}};
		
int main(void)
{
	srand(time(NULL));
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
	puts("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
  	puts(".*         Welcome to Siling Probinsya         *.");
  	puts("*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*");
	
	puts("\nPlease take your order!\n");
	
	for (int i = 0; i < ITEMS; i++)
	{
		printf("Code: %s    ", foods[i].code);
		printf("Php: %i   ", foods[i].price);
		if (foods[i].price < 100)
		{
			printf(" ");
		}
		printf("%s\n", foods[i].name);
	}
	char *random = easter_eggs[rand() % EGGS];
	printf("\n%s\n", random);
	int total = 0;
	int x = 1;
	int flag = 0;
	puts("");
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
		for (;;)
		{
			FORFLAG: printf("Order no.%i: ", x);
			char ch[2];
			scanf("%s", &ch);
			while (getchar() != '\n');
			for (int j = 0; j < ITEMS; j++)
			{
				if (strcmp(foods[j].code, ch) == 0)
				{
					printf("Php: %i   ", foods[j].price);
					if (foods[j].price < 100)
					{
						printf(" ");
					}
					printf("%s\n", foods[j].name);
					total += foods[j].price;
					flag = 1;
					break;
				}
				flag = 0;
			}
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
	printf("\n\nThe total price is Php: %i\n", total);
	puts("Thank you! Come again!");
	return 0;
}
