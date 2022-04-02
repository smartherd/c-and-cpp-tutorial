## Chapter 15 Recursion: Use the below code at the start of lesson 

```C 
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

```
