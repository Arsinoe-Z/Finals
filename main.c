#include <stdio.h>
#include <conio.h>
#include <string.h>

#define ITEMS 39

typedef struct
{
	char *name;
	int price;
	char *code;
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
char codes[ITEMS] = {0001, 0002, 0003, 0004, 0005, 0006, 0007,
		0008, 0009, 0010, 0011, 0012, 0013, 0014, 0015,
		0016, 0017, 0018, 0019, 0020, 0021, 0022, 0023,
		0024, 0025, 0026, 0027, 0028, 0029, 0030, 0031,
		0032, 0033, 0034, 0035, 0036, 0037, 0038, 0039};
		
int main(void)
{
	for (int i = 0; i < ITEMS; i++)
	{
		foods[i].name = names[i];
		foods[i].price = prices[i];
		foods[i].code  = codes[i];
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
  	return 0;
}
