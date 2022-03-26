## Chapter 10: Code Challenge with Solution 

WAP to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series. Where 'n' is the user input.  

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

	int n;
	long sum = 0;		// The sum could be a very long integer value. 

	puts("Enter n: ");	// User input. 
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		sum = sum + (i * i);	// The value ‘i’ will increase by 1 with each iteration. 
	}

	printf("Sum: %ld", sum);	// Print the sum. 

	return 0;
}

```
