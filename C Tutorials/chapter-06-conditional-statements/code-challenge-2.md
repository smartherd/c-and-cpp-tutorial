## Chapter 6: Code Challenge with Solution 

WAP to provide appropriate feedback to a student based on grade secured in the exam. 
Consider the following while writing the program:
-	The possible grades are A, B, C, D, E, and F.
-	Provide the following feedback corresponding to the grade as follows: 
    -	A: Excellent! Keep it up.
    -	B: Very good! Keep it up.
    -	C: Good! Try improving in the next exam. 
    -	D: Average! Need to work hard.
    -	E: Poor! Need a lot of hard work.
    -	F: Failed! You need to attend special classes after school. 
-	Allow users to input grade.
-	Consider how your program should behave if the user enters an invalid grade. 
-	Use the switch case statement. 
 

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

	// WAP to provide appropriate feedback to a student based on grade secured in the exam.
	// Code challenge solution

	char grade;
	puts("Please enter grade: ");
	scanf("%c", &grade);

	switch (grade) {
		case 'A':
			puts("Excellent! Keep it up.");
			break;
		case 'B':
			puts("Very good! Keep it up.");
			break;
		case 'C':
			puts("Good! Try improving in the next exam.");
			break;
		case 'D':
			puts("Average! Need to work hard.");
			break;
		case 'E':
			puts("Poor! Need a lot of hard work.");
			break;
		case 'F':
			puts("Failed! You need to attend special classes after school.");
			break;
		default:
			puts("Invalid grade.");
	}

	return 0;
}

```
