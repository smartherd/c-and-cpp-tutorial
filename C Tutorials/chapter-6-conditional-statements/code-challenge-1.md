## Chapter 6: Code Challenge with Solution 

WAP to find out the grade of a student based on the marks secured in the exam. 
Consider the following while writing the program:
-	Maximum marks that can be secured by a student is 500 
-	If marks secured by the student is 
    - Greater than or equal to 450 and less than or equal to 500: ‘A’ grade 
    -	Greater than or equal to 400 and below 450: ‘B’ grade 
    -	Greater than or equal to 350 and below 400: ‘C’ grade 
    -	Greater than or equal to 250 and below 350: ‘D’ grade 
    -	Greater than or equal to 150 and below 250: ‘E’ grade 
    -	Less than 150: ‘F’ grade 
-	Allow user to input his total marks secured out of 500 
-	Consider how your program should behave if the user enters a negative number or enters marks above 500
-	Use else-if ladder statements
 

Use the given program as the starting point for this code challenge.
 
```C
#include <stdio.h>

int main() {
	// Write your code here 
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

	// WAP to find out the grade of a student based on marks secured in the exam.
	// Code challenge solution

	char grade = ‘X’;
	int marks;
	puts("Please enter your marks: ");
	scanf("%d", &marks);

	if (marks >= 450 && marks <=500) {
		grade = 'A';
	} else if (marks >= 400 && marks < 450) {
		grade = 'B';
	} else if (marks >= 350 && marks < 400) {
		grade = 'C';
	} else if (marks >= 250 && marks < 350) {
		grade = 'D';
	} else if (marks >= 150 && marks < 250) {
		grade = 'E';
	} else if (marks >= 0 && marks < 150) {
		grade = 'F';
	} else {	// For negative value or a value greater than 500
		puts("Invalid input.");
	}
	
/* If the marks entered by the user is a valid mark between 0 and 500 then ‘grade’ would not be equal to ‘X’ i.e. he has been assigned a valid grade.  */
	if (grade != ‘X’)
		printf("\nYour grade is: %c", grade);

	return 0;
}

```
