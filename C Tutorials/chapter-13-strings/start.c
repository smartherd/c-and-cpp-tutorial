/*
	Author: 	Sriyank Siddhartha (Youtube: Smartherd) 
	Chapter: 	Strings 
*/

#include <stdio.h>


int main() {

    // Various ways to declare a string.
    char str1[3] = "hi";

    char str2[10] = "hi";

    char str3[] = "hi";

    char str4[] = { 'h', 'i', '\0'};

    char str5[3] = { 'h', 'i', '\0' };

    char str6[3] = { 'h', 'i' };		// Not a string. It is a normal character array.

	return 0;
}
