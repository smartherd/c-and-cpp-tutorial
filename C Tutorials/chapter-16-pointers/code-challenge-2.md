## Chapter 16: Code Challenge with Solution 

WAP to find the largest number in the given array using a pointer.
- The array is: 
    - float numbers[5] = {983, 2.9, 34, 433, 1000.567};
- Create a user-defined function that will accept the pointer as a parameter. The pointer should point to the array defined in the main function. 
- Using pointer find the largest number in the user-defined function and return the largest number to the main function. 
 
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

float findLargestNumber(float *, int);

int main() {

	/* WAP to find out the largest number in the given array using a pointer. */
	float numbers[5] = {983, 2.9, 34, 433, 1000.567};
	float *p = numbers;		// Defining pointer to the array.

	/* Function call. */
	float num = findLargestNumber(p, 5);

	printf("The largest number is: %.4lf ", num);

	return 0;
}

float findLargestNumber(float *ptr, int size) {

	/* Initially assuming the largest number is the value in the array to which the pointer is currently pointing at. */
	float largest = *ptr;

	for (int i = 0; i < size; i++) {

		// If the current element in the array is greater than the assumed largest number.
		if (*ptr > largest) { 
			largest = *ptr;	 // Then the current element will be assumed to be the new largest number.
		}

	   ptr++;
	}

	/* After the termination of the loop, the last assumed largest number becomes the largest among all. */
	return largest;
}

```
