## Chapter 5: Operators (Quiz with Solution)     

__Question 1: MCQ__       
Consider the following code snippet and find the output: 
```C 
int num = 8; 
printf(“%d”, num++ - ++num + --num); 
``` 
1. 8
2. 7
3. 9
4. 10
----
__Question 2: MCQ__       
Find the output of the following code snippet?
```C 
int result = 3 * 10 - 2 % 5 / 2;
printf(“%d”, result); 
``` 
1. 28
2. 30
3. 1
4. 29

----
__Question 3: MCQ__       
Find the value stored in num variable: 
```C 
int num = 100 % 3;
``` 
1. 1
2. 3
3. 33
4. 33.33 
----

__Question 4: MCQ__       
Find the output of the following code snippet? 
```C 
int result = 3 * (10 - 2) % 5 / 2; 
printf(“%d”, result); 
``` 
1. 29
2. 1
3. 2
4. 30

----

__Question 5: MCQ__       
Provided age and num are integer variables, the following statement is equivalent to:
```C
age *= num; 
``` 
1. `age = age * num;` 
2. `age * num = num;`
3. `num * age = age`
4. `num = age * num;` 

----

__Question 6: MCQ__       
The outcome of using a relational operator in an expression in C is: 
1. A positive number (greater than 0)
2. true or false
3. 1 or 0
4. True or False

----

__Question 7: Fill in the Blank__      
The value of the result in the following code snippet is ________.
```C 
int a = 10, b = 10, c = 15;
int result = a > b && c >= a || a == b;  
``` 
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
__Question 1:__ (2) 7   
- num++ - ++num + --num = 8 - 10 + 9 = 7    

---- 
__Question 2:__ (4) 29      
Evaluate the expression from left to right keeping precedence in mind. 
- 3 * 10 - 2 % 5 / 2
- 30 - 2 % 5 / 2
- 30 - 2 / 2
- 30 - 1
- 29
   
---- 
__Question 3:__ (1) 1      
- When 100 is divided by 3, the remainder is 1.    

---- 
__Question 4:__ (3) 2   
- Evaluate the expression from left to right keeping precedence in mind. Remember, the parenthesis takes the highest precedence.    

---- 
__Question 5:__ (1) `age = age * num;`   

---- 
__Question 6:__ (3) 1 or 0      
- The relational operator always gives result as either a 1 or 0.    

---- 

__Question 7:__ 1  
Evaluate the expression from left to right. 
- a > b && c >= a || a == b 
- 10 > 10 && 15 >= 10 || 10 == 10 
- 0 && 1 || 1 
- 0 || 1
- 1 
   

---- 
