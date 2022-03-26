## Chapter 4: Code Challenge with Solution 

WAP to find the area of the circle. Consider including the following in your program:
- Get radius of the circle as user input. 
- Use appropriate data types as required. 
- To improve user experience, use user-friendly messages.
- You may decorate your program to greet the user with a welcome message and a thank you note. 

Desired output: 
```C 
********************************
-----------WELCOME-----------
********************************

Enter the radius of the circle in centimetres: 
24.5  

Calculating radius… 
The area of the circle is 1884.79 sq. cm.

**********************************
-----------THANK YOU-----------
**********************************
```    

Use the given program as the starting point of this code challenge.
 
```C
#include <stdio.h>
#include <unistd.h>

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
#include <unistd.h>

int main() {

	// Formula to calculate the area of the circle: PI * radius * radius

	puts("**************************");
	puts("---------WELCOME----------");
	puts("**************************\n");

	const float PI = 3.14;
	float radius, area;

	puts("Enter the radius of the circle in centimetre: ");
	scanf("%f", &radius);

	puts("\nCalculating radius...");
	usleep(500000);

	area = PI * radius * radius;

	printf("The area of the circle is: %.2f sq. cm.\n\n", area);
	usleep(500000);

	puts("**************************");
	puts("--------THANK YOU---------");
	puts("**************************");

	return 0;
}

```
