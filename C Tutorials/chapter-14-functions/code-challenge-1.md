## Chapter 14: Code Challenge with Solution 

WAP to calculate the perimeter of a given rectangle.     
- Take the length and breadth of the rectangle as user input.     
- The length and breadth could be a decimal value entered by the user.    
- Define a function that will accept the length and breadth of the rectangle as parameters and return the perimeter of that rectangle.    
- Additionally, you can greet the user with a welcome message. To keep the main function clean, put the code to greet the user within a separate function.     

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

/* Function Declarations. */
double getPerimeter(double, double);
void greetUser();

int main() {

	/* WAP to find out the perimeter of a rectangle. */

	/* Calling greetUser function to print a welcome message. */
	greetUser();

	/* Declaring required variables. */
	double length, breadth, perimeter;

	/* Taking user input. */
	puts("Enter length of the rectangle: ");
	scanf("%lf", &length);

	puts("Enter breath of the rectangle: ");
	scanf("%lf", &breadth);

	/* getPerimeter function returns the computed perimeter of the rectangle.  */
	perimeter = getPerimeter(length, breadth);

	/* Printing the result. */
	printf("The perimeter of the rectangle: %.3lf", perimeter);

	return 0;
}

void greetUser() {

	puts("------------------------------------------");
	puts("---------------- WELCOME -----------------");
	puts("------------------------------------------\n");
}

double getPerimeter(double length, double breadth) {

	return 2 * (length + breadth);
}
```
