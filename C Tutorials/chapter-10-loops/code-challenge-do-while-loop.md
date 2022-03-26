## Chapter 10: Code Challenge with Solution 

__WAP to input a number and check if it is a palindrome or not using do while loop. A palindrome is a number that is the same if read from left to right or right to left. Examples of palindromes: 121, 1331, 4987894, 2002, 98789, 989.__

__Hint to build logic:__ To check if a number is a palindrome or not, you need to first reverse the number and then compare the reversed number with the original number. Here are a few steps you should consider while writing the program. 
- Enter num
- Store the num in a separate variable originalNum (so that it can be compared with the reversedNumber at the end of the program)
- Execute do while loop until num is greater than 0. And with each iteration do the following: 
    - Find the last digit of the number 
	    - The last digit will be the remainder value when num is divided by 10
    - Multiply reversedNumber by 10 and add the remainder 
        - This will allow you to generate a reversedNumber when the execution of the do while loop stops  
    - Delete the last digit from the num by dividing it by 10
        - This will give a new num value to be used in the next iteration 
        - The loop ends when num is not greater than zero  
- If reversedNum is equal to originalNum then it is palindrome, else it is not a palindrome 


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

	int num, reversedNumber = 0, remainder;

	printf("Enter a number: ");
	scanf("%d", &num);

	// Store user input in a variable so that the reversedNumber can
	// be compared to the original user input in the end.
	int originalNum = num;

	do {
		remainder = num % 10;
		reversedNumber = (reversedNumber * 10) + remainder;
		num = num / 10;
	} while (num > 0);

	if (originalNum == reversedNumber)
		printf("Palindrome");
	else
		printf("Not a palindrome");

	return 0;
}

/* Explanation: 
- Assume num  = 121
- originalNum = num = 121
- Do while loop will execute until num is greater than 0 
    - 1st iteration:
        - remainder = num % 10 = 121 % 10 = 1 
        - reversedNumber = (reversedNumber * 10) + remainder = 0 * 10 + 1 = 1
        - num = num / 10 = 121 / 10 = 12
    - 2st iteration:
        - remainder = num % 10 = 12 % 10 = 2
        - reversedNumber = (reversedNumber * 10) + remainder = 1 * 10 + 2 = 12
        - num = num / 10 = 12 / 10 = 1
    - 3rd iteration:
        - remainder = num % 10 = 1 % 10 = 1
        - reversedNumber = (reversedNumber * 10) + remainder = 12 * 10 + 1 = 121
        - num = num / 10 = 1 / 10 = 0 
        - Loop terminates since num becomes 0 at the end of 3rd iteration. 
        
- Since reversedNum and originalNum are found to be equal, therefore the entered number is a palindrome. 
*/
```
