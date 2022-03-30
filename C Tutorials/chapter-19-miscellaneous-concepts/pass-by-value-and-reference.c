/*
	Author: 	Sriyank Siddhartha (Youtube: Smartherd)
	Chapter: 	Miscellaneous Concepts 
*/

#include <stdio.h>

void changeValue(int *);


int main() {

	/* Pass by Value vs. Pass by Reference */
	int x = 10;

	printf("The value of 'x' before calling changeValue(): %d\n", x);

	changeValue(&x);

	printf("The value of 'x' after calling changeValue(): %d\n", x);

	return 0;
}

void changeValue(int *num) {

	(*num)++;
}
