## Chapter 3: Code Challenge 

Write a program to print out:     
```As economic reforms picked up the pace, India's GDP grew five-fold to reach US$2.2 trillion in 2015 (as per IMF estimates).```    

You need to define separate variables for `India`, `$`, `2.2`, and `2015`. Use appropriate data types for each literal and accordingly print the statement using their corresponding format specifiers.     

Use the given program as the starting point of this code challenge.
 
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

	char name[10] = "India";
	char dollar = '$';
	float gdp = 2.2;
	int year = 2015;

	printf("As economic reforms picked up the pace, %s's GDP grew five-fold to reach US%c%.1f trillion in %d (as per IMF estimates).", name, dollar, gdp, year);

	return 0;
}

```  
