## Chapter 10: Loops (Quiz with Solution)     

__Question 1: MCQ__     
Find the output of the following code snippet? 

```C
#include <stdio.h>

int main() {
	int i = 1;

	while (i++ <= 5) {
		printf(“%d”, i++);
    }

    return 0;
}
```    

1. 1 3 5
2. 1 3
3. 2 4 6
4. 2 4 

----   

__Question 2: MCQ__     
Find the output: 

```C 
#include <stdio.h>

int main() {

	int i;

	for (i = 49; i < 57; i++) {
		printf("%c ", i);
	}

	return 0;
}
```   

1. 1 2 3 4 5 6 7 8 
2. 49 50 51 52 53 54 55 56 57 
3. 50 51 52 53 54 55 56 57
4. 49 50 51 52 53 54 55 56

-----   

__Question 3: MCQ__     
Find the output: 
Hint: Integer 1 represents ‘true’ and 0 represents ‘false’ condition respectively. Similar to integer 1, any non-zero integer value represents ‘true’ condition too. 
```C  

#include <stdio.h>

int main() {

	int i = 5;

	do {
		printf("%d ", i--);
	} while (i);

	return 0;
}

```    
1. 4 3 2 1
2. 5 4 3 2 1 
3. Infinite loop. The loop will never end and will print values from 5 to negative infinity.  
4. Syntax error. 

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
__Question 1:__ (3) 2 4 6      
-  The value of `i` in the condition `i++ <= 5` is first used and later incremented. In print statement, the value of `i` in `i++` is printed (used) first and later incremented.    

---- 
__Question 2:__ (1) 1 2 3 4 5 6 7 8   
- Trick question. We are using character format specifier `%c` to print the character values associated with the integer ASCII values from 49 to 56.    

---- 
__Question 3:__ (3) 5 4 3 2 1     
- `while (i)` is true until the value of `i` becomes `0`. The loop will terminate if the value `i` becomes `0`, since `0` in C represents `false`.    

---- 
