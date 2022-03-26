## Chapter 17: Memory Management (Code Challenge with Solution) 

WAP to input `n` numbers and then find out their sum.
- Use `calloc()` function to dynamically allocate memory as per the value of `n`.
- Consider using `float`, since the user input could be a floating-point decimal value.


Use the given program as the starting point for this code challenge.
 
```C
#include <stdio.h>
#include <stdlib.h>

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
#include <stdlib.h>

int main() {

	int n;
	float *p, sum = 0;

	puts("Enter n: ");
	scanf("%d", &n);

	p = (float*) calloc(n, sizeof(float));

	if (p == NULL) {
		puts("Memory allocation failed");
		exit(0);
	} else {
		puts("Enter data: ");

		/* User input. */
		for (int i = 0; i < n; i++) {
			scanf("%f", p + i);	// Elements are being stored at their address. 
		}

		/* Find the sum. */
		for (int i = 0; i < n; i++) {
			sum = sum + p[i];	// Accessing elements stored in the memory block by using 'p[i]'.
		}

		printf("The sum is %.2f", sum);
	}

	return 0;
}

```
