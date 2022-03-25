## Chapter 3: Tokens      
__Question 1: Match the Column__    
Match the format specifiers of C programming language listed in column 1 with their most appropriate data type listed in column 2. 

| Column 1 | Column 2  |
|:-------------:|:-----:|
| %c | float |
| %d      |   double |
| %ld      |    char |
| %f       |    long |
| %lf       |    int |

---- 
__Question 2: MCQ__    
Which of the following functions is used to check the size of data type in C? 
1. `getsize()` 
2. `ofsize()` 
3. `size()` 
4. `sizeof()` 

---- 
__Question 3: MCQ__     
What are literals? 
1. Literals are variables. 
2. Literals are constant values that do not change. 
3. Literals are similar to comments and are ignored by the compiler. 
4. Literals are data types which define the space a variable will occupy in storage. 

---- 
__Question 4: MCQ__     
Identify the invalid Token in C. 
1. Variable
2. White space 
3. main 
4. semi-colon (;) 
----    
__Question 5: MCQ__     
Find the most appropriate output? 
```C    
#include <stdio.h>
int main() {
    float price = 194.57;
    printf("%f", price);
    printf("%.1f", price);
    printf("%.2f", price);
    printf("%.3f", price);
    return 0;
}
``` 

1. 	
```
194.570000
194.600000
194.570000
194.570000 
```
2.
```
194.570000 
194.5 
194.57 
194.570 
```
3.
```
194.570007
194.6
194.57
194.570 
```
4.
```
194.570000
194.570
194.57
194.6 
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
__Question 1:__   

| Column 1 | Column 2  |
|:-------------:|:-----:|
| %c | char |
| %d      |   int |
| %ld      |    long |
| %f       |    float |
| %lf       |    double |

---- 
__Question 2:__ (4) `sizeof()`      

----    
__Question 3:__ (2) Literals are constant values that do not change.           

----    

__Question 4:__ (2) White space                
- Except for white space, everything is token in C.     
----    

__Question 5:__ (3) 

```
194.570007
194.6
194.57
194.570 
```
- `%f` prints the float value with the scale of 6. The value after decimal will vary from machine to machine. For some machines, it could be `194.570000` and for some, it could be an unexpected value such as `194.570007`.     
- `%.1f`, `%.2f` and `%.3f` prints the float value with the scale of 1, 2 and 3 after rounding the value if required. 

----    
