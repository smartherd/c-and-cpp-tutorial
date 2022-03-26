## Chapter 13: Code Challenge with Solution 

WAP to input two strings. 
    - Append second string at the end of the first string with an additional space in between. 
    - Print the first string. 
__Note:__ Your program should accept strings with spaces and don’t forget to clear input buffer stream memory while taking string user input as required. 
 
Use the given program as the starting point for this code challenge.
 
```C
#include <stdio.h>
#include <string.h>

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
#include <string.h>

int main() {

	char str1[50], str2[50];

	puts("Enter first string: ");
	scanf("%[^\n]%*c", str1);

	puts("Enter second string: ");
	scanf("%[^\n]%*c", str2);

	/* Append a blank space at the end of str1. */
	strcat(str1, " ");

	/* Append str2 at the end of str1. */
	strcat(str1, str2);

	printf("Final result: %s", str1);

	return 0;
}

```
