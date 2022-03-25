## Chapter 6: Conditional Statements (Quiz with Solution)     


__Question 1: MCQ__      
Which of the following data types is not supported by the switch statement? 
1. int
2. char
3. double
4. long

----

__Question 2: MCQ__       
Which of the following represents the correct form of the ternary operator?
1. `a = b? puts(“a and b are equal”) : puts(“a and b are not equal”)`
2. `a > b? puts(“a is greater”) : puts(“b is greater”)`
3. `a < b? puts(“a is smaller”); : puts(“b is smaller”);`
4. `a++? puts(“a can be incremented”): puts(“a cannot be incremented”)`

----
__Question 3: MCQ__       
Identify the error considering all the print statements are a part of if-else statements.
```C 
1	int age = 19;
2  
3	if (age >= 18) 
4		puts("Eligible to vote.");
5	else
6		puts("Not eligible to vote.");
7		puts("You must be 18 years old to cast vote.");
``` 
1. Line number 6 and 7 of else clause should be enclosed within curly brackets
2. Line number 4 of if clause and line number 6 and 7 of else clause should be within curly brackets
3. Line number 4 of if clause should be within curly brackets
4. No error 

----
__Question 4: MCQ__       
Find the output? 

```C     
char symbol = '%';

switch(symbol) {
  default:
    puts("No match found.");
  case '*':
    puts("Asterisk symbol found.");
    break;
  case '%':
    puts("Percentage symbol found.");
    break;
}
```   
1. 	No match found.
Asterisk symbol found.
Percentage symbol found.
2. 	Asterisk symbol found.
Percentage symbol found.
3. 	Syntax error. The default statement should not be present at the beginning of the switch statement. 
4. 	Percentage symbol found.

---- 

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
__Question 1:__ (3) double   
- Floating type decimal values are not supported by switch case.    

---- 
__Question 2:__ (2) `a > b? puts(“a is greater”) : puts(“b is greater”)`  
- `condition? Exp1: exp2` is the correct syntax for implementing ternary operator.   

---- 
__Question 3:__ (1) Line number 6 and 7 of else clause should be enclosed within curly brackets      
- Since the code within if-else is not written within curly brackets. Hence, only line number 6 will be a part of the else clause. Line number 7 won’t belong to the if-else conditional statement.    

---- 
__Question 4:__ (4) Percentage symbol found.  
- The statement `case ‘%’` will be matched and therefore the control of execution will break out of switch statement.    

---- 
