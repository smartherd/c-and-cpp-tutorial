/*
	Author: 	Sriyank Siddhartha (Youtube: Smartherd)
	Chapter: 	Recursion 
*/

#include <stdio.h>

void greetUser();

int main() {

	greetUser();

	return 0;
}

void greetUser() {

	puts("Welcome");
	greetUser();
}
