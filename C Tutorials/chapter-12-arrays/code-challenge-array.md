## Chapter 12: Code Challenge with Solution 

WAP to input 10 numbers in an array, print the array and then find out the largest number present in the array.  

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

	/* Let the largest number be initially 0. */
	int a[10], i = 0, largest = 0;

	/* While loop to get user input and find the largest number. */
	while (i < 10) {
		printf("Enter number %d:", i + 1);
		scanf("%d", &a[i]);

		/* If the current number (i.e. a[i]) entered by user is greater than the last value of ‘largest’ variable then the current number (a[i]) becomes the new largest number. */
		if (a[i] > largest)
			largest = a[i];

		i++;
	}

	/* For loop to print the content of array. */
	printf("The array is: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	printf ("\nThe largest number in the array is: %d", largest);

	return 0;
}

```
