## Chapter 13: Strings (Quiz with Solution)     

__Question 1: MCQ__     
Which of the following is the most appropriate definition for a string?
1. Array of characters terminated with a nullable character. 
2. Array of characters terminated with a `\n` character. 
3. Array of character. 
4. Array of characters terminated with a `\0` character. 

----- 


__Question 2: MCQ__     
Which of the following is an invalid initialization of string in C programming to store a string literal “hello”? 
1. `char str[4] = “hello”;`
2. `char str[] = “hello”;`
3. `char str[] = { ‘h’, ‘e’, ‘l’, ‘l’, ‘o’, ‘\0’};` 
4. `char str[100] = { ‘h’, ‘e’, ‘l’, ‘l’, ‘o’, ‘\0’};` 

----- 


__Question 3: MCQ__     
Find the output of the following code snippet assuming user input is “This is my country”?

```C
char str[100];
scanf("%s", str);
printf("%s", str);
```

1. `This` 
2. `This is` 
3. `This is my` 
4. `This is my country` 

-----


__Question 4: MCQ__     
In the following code snippet, while taking user input, why ‘&’ i.e. Address Of operator is not used with string str for reading user input? Select the most appropriate reason. 
```C
char str[100];
scanf("%[^\n]s", str);
printf("%s", str);
```
1. The Address Of operator is never used to read user input. 
2. str represents the base address of the string character array. 
3. Using Address Of operator is only valid while taking primitive data type user input. 
4. This is an invalid code snippet. The Address Of operator must be used for taking string user input.

---- 

__Question 5: MCQ__     
Assuming the following code is executable, find the output?

```C
char str[10] = { ‘h’, ‘e’, ‘l’, ‘l’, ‘o’, ‘\0’ }; 
printf(“%d”, strlen(str)); 
```

1. 10
2. 6
3. 5
4. Compilation error.


----- 
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
__Question 1:__ (4) Array of characters terminated with a `\0` character.   
- A string is an array of characters terminated with a null character `\0`.   

---- 
__Question 2:__ (1) `char str[4] = “hello”;`  
- To store string literal “hello”, we must declare a character array with at least 5 characters.    

---- 
__Question 3:__ (1) `This`   
- “%s” stops reading user input once it encounters a space.    

---- 
__Question 4:__ (2) `str` represents the base address of the string character array.   
- The string name when used in code, represents the base address of the memory location of the character array that represents the string.    

---- 
__Question 5:__ (3) 5  
- The `strlen()` function does not count the null character `\0` as a part of the string.    

---- 
