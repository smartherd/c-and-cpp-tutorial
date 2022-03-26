## Chapter 16: Code Challenge with Solution 

Write a program to input two integers and find the sum of those two numbers by using pointers. 
- Define two integer variables and get user input. 
- Define two pointers for each integer variable.
- Find the sum and print the result.  
 
Use the given program as the starting point for this code challenge. 
```C
#include <stdio.h>

int main() {

    return 0;
}
```

----
----
----
----
## Scroll Down for Solution 
----
----
----
----
----
----
----
----
----
----

```C
#include <stdio.h>

int main() {

	/* Write a program to input two integers and find the sum of those two numbers by using pointers. */
	int a, b;
	int *x, *y;		// Pointer variable declaration.

	/* Initializing pointers. */
	x = &a;
	y = &b;

	/* User input. */
	puts("Enter first number: ");
	scanf("%d", &a);

	puts("Enter second number: ");
	scanf("%d", &b);

	int sum = *x + *y;	// '*x' is equivalent to value of 'a'. '*y' is equivalent to value of 'b'.
	printf("The sum is %d.\n", sum);

	return 0;
}

```
