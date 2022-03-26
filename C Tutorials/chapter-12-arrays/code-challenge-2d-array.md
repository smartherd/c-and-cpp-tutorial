## Chapter 12: Code Challenge with Solution 

WAP to input a 2D array of size 2 * 3, print all the elements in the form of a matrix and then find out the sum of all the elements entered in the 2D array. 

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

	int a[2][3], sum = 0;

	// We will use nested for loop to access each position in a 2D array very similar to what we saw in the previous video 

	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 3; c++) {

			// User input for each element 
			printf("Enter a number: ");

			// Store entered element in the 2D array at rth row and cth column index
			scanf("%d", &a[r][c]);	
			
			// As soon as we get the element, we add it to the variable sum
			sum += a[r][c];
		}
	}

	puts("The entered 2D array is:");

	for (int r = 0; r < 2; r++) {
		for (int c = 0; c < 3; c++) {
			// Print each element stored in the 2D array 
			printf("%d ", a[r][c]);
		}
		printf("\n");
	}

	// Print the final sum
	printf ("The sum is: %d", sum);

	return 0;
}

```
