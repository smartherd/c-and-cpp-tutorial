## Chapter 4: User Input     

__Question 1: MCQ__     
`printf()` and `scanf()` functions are a part of which header file in C? 
1. unistd
2. stdio
3. stdin
4. stdout

----     
__Question 2: MCQ__     
Assuming the user enters “Farm House” in the output console, what would the print statement `printf("%s", name)` print in the output console? 

```C

#include <stdio.h>

int main() {

	char name[30];

	printf("Enter pizza name: ");
	scanf("%s", name);

	printf("%s", name);

	return 0;
}
```

1. Error
2. Farm House
3. House
4. Farm 

----     

__Question 3: MCQ__    
Which of the following functions deal with characters only? 
1. `putchar()` and `getchar()` 
2. `printf()` and `scanf()` 
3. `puts()` and `gets()` 
4. `putchar()`, `getchar()`, `scanf()`, and `printf()` 

----     

__Question 4: Fill in the Blank__    
The _________ key on the keyboard represents the newline (`\n`) character in C. 

----     

__Question 5: MCQ__     
Identify the output data stream used to manage output operation in C. 
1. stdio header 
2. unistd header 
3. stdin or standard input 
4. stdout or standard output 
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
__Question 1:__ (2) stdio      

---- 

__Question 2:__ (4) Farm   
- Using `%s` stores string characters until it encounters a white space. That is why it is recommended to use `%[^\n]%*c` while taking string input which stores string characters until `\n` or the enter key is encountered.    

---- 
__Question 3:__ (1) `putchar()` and `getchar()`  

---- 
__Question 4:__ Enter Key   

---- 
__Question 5:__ (4) stdout or standard output   

---- 
