## Chapter 8: Miscellaneous Concepts (Quiz with Solution)     

__Question 1: Fill in the Blank__      
The escape sequence is also known as _________. 

----
__Question 2: MCQ__      
What is the data type of a literal value enclosed within single quotes such as ‘4’?
1. `char`
2. `int`
3. `long`
4. `float`

-----

__Question 3: MCQ__      
Find the output of the following code snippet? 

```C
puts("\"They don\'t know that we know they know we know.\"");
``` 

1. `\"They don\'t know that we know they know we know.\"`
2. `"They don\'t know that we know they know we know."`
3. `"They don't know that we know they know we know."`
4. `They don't know that we know they know we know.`

---- 

__Question 4: MCQ__      
Find the output of the following code snippet? 
```C 
float x = 3.9; 
int y = (int) x; 
printf("%d", y); 
``` 

1. 4 
2. 3 
3. 3.9 
4. Compilation Error 

----  

__Question 5: MCQ__      
Find the output of the following code snippet: 
```C 
char x = '3';
float y = x;

printf("%f", y);
``` 

1. 3.000000
2. Compilation error
3. 3
4. 51.000000

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
__Question 1:__ Escape character       


---- 
__Question 2:__ (1) `char`   
- A literal, when enclosed within single quotes, is always a character.    

---- 
__Question 3:__ (3) `"They don't know that we know they know we know."`  
- `\”`, and `\’` are escape characters.    

---- 
__Question 4:__ (2) 3   
- 	While performing the explicit conversion from float data type to an int, the information after the decimal point is lost.    

---- 
__Question 5:__ (4) 51.000000  
- The ASCII value of the character ‘3’ is 51. Assigning a character value to a float data type variable implicitly converts the ASCII value 51 to a floating-point value.    

---- 
