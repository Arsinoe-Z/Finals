#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define ITEMS 39

typedef struct
{
	char *name;
	int price;
	char code[2];
} food;

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
	
	puts("Please take your order!\n");
	
	for (int i = 0; i < ITEMS; i++)
	{
		printf("Code: %s    ", foods[i].code);
		printf("Php: %i    ", foods[i].price);
		printf("%s\n", foods[i].name);
	}
	
  	return 0;
}
