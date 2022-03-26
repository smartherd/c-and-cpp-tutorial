## Chapter 15: Code Challenge with Solution 

WAP to display the nth Fibonacci number in the Fibonacci series.
- The value ‘n’ will be entered by the user. 
- The Fibonacci series is a series of numbers in the following sequence: 
    - 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
    - Where the 0th Fibonacci number is 0 and the 6th Fibonacci number is 8. 
- Except for the first two numbers (0 and 1) of the sequence, every other number in the sequence is the sum of the previous two numbers, for example, 8 = 3 + 5 (addition of 3 and 5).

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

int fib(int);

int main() {

	int n;

	printf("Enter n: ");
    scanf("%d",&n);

    int result = fib(n);		// Statement 'A'

    printf("The fibonacci number is: %d", result);

    return 0;
}

```
