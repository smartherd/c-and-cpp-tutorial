## Chapter 1: First C Program   

__Question 1: Fill in the Blank__  

All files that contain C programs must contain the file extension of _________. 

---- 
__Question 2: MCQ__  
Which of the following is a multi-line comment? 
 1. All of these 
 2. `/** This is multi-line comment */` 
 3. `/* This is multi-line comment **/` 
 4. `/* This is multi-line comment */`  

---- 

__Question 3: MCQ__  
Assuming the following code options are a part of a C program, which of the following code will be ignored by C-compiler?  
 1. `printf("Hello World");` 
 2. `// Hello World` 
 3. `/* Hello World /` 
 4. `/ Hello World` 

----    

__Question 4: MCQ__    
Which of the following holds true for print functions such as printf() or puts()?    
 1. `printf()` prints the string by adding a new line character `\n` in the end.
 2. Both `puts()` and `printf()` print the string by adding a new line character `\n` in the end.
 3. `puts()` manually requires you to add a new line character `\n` in the end to move the cursor to the new line. 
 4. `puts()` prints the string by adding a new line character `\n` in the end.

---- 

__Question 5: MCQ__    
Assuming the given code is executable, find the output: 
```c 
int main() { 
  puts("Hello World. ");
  printf("My first step in the World. ");
  puts("My last step in the World. ");
  return 0;
}
``` 
 1. `Hello World. My first step in the World. My last step in the World.`  
 2. `Hello World.`  
    `My first step in the World.`    
    `My last step in the World.`
 3. `Hello World.`    
    `My first step in the World. My last step in the World.` 
 5. `Hello World. My first step in the World.`    
    `My last step in the World.` 
---- 

__Question 6: Arrange in Order__     
Arrange the following in most appropriate sequence so as they form a basic structure of the C program.  
1. Link Section 
2. The main() function 
3. Documentation Section 
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
__Question 1:__ `.c` 

---- 
__Question 2:__ (1) All of these   
- Anything that is written in-between `/*` and `*/` is a multi-line comment. 

---- 
__Question 3:__ (2) `// Hello World`  
- A comment is ignored by C compilers. `// Hello World` is a comment. 

----    

__Question 4:__ (4) `puts()` prints the string by adding a new line character `\n` in the end. 
- The `puts()` prints the text (string) enclosed within double quotes by appending a new line character `\n` in the end.    

---- 
__Question 5:__ (3)    
    `Hello World.`    
    `My first step in the World. My last step in the World.`   
- The `puts()` prints the text (string) enclosed within double quotes by appending a new line character `\n` in the end.   

---- 
__Question 6:__ (3) then (1) then (2)    
(3) Documentation Section    
(1) Link Section    
(2) The main() function    

---- 
