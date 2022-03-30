/*
	Author: 	Sriyank Siddhartha (Youtube: Smartherd)
	Chapter: 	Pointers 
*/

#include <stdio.h>


int main() {

	/* Incrementing and decrementing a pointer. */
	float values[] = {10.5, 100.9, 200, 4.1, 989.38, 2.3};
	float *ptr;
	ptr = values;	// OR ptr = &values[0]

	for (int i = 0; i < 6; i++) {

		printf("Value at index %d = %.2f\n", i, *ptr);

		ptr++;	// Move to immediate next memory location in the array.
	}
	
	return 0;
}
