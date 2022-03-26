## Chapter 11: Loop Control Statements (Quiz with Solution)     

__Question 1: MCQ__     
What is the use of `break` statement in a loop?
1. It takes the control out of the loop. 
2. It causes the loop to skip the remainder of its body and immediately initiate the new iteration.
3. It takes the control out of the loop after executing the remaining code following it within the loop.
4. It takes control out of the program. 

-----

__Question 2: MCQ__     
What is the use of `continue` statement in a loop?
1. The functionality of `continue` is the same as `break` statement. 
2. `continue` statement ignores the statements within the loop that are present after it and takes the control to the beginning of loop.
3. `continue` statement ignores the statements within the loop that are before it and takes the control to the beginning of loop.
4. `continue` statement ignores the statements within the loop that are after it and takes the control to the beginning of loop.

----- 
__Question 3: MCQ__     
Find the output: 

```C 
#include <stdio.h>

int main() {
   
	int i = 1;
	
	do {
		printf("%d ", i);
		i++;
		if (i < 4)
			continue;
	} while (0);

	return 0;
}
```   

1. 1 2
2. Compilation error. 
3. 1 2 3
4. 1

------

__Question 4: MCQ__     
Find the output: 

```C  
 #include <stdio.h>

int main() {

	int i = 1;
	do {
		printf("%d\n", i);
		i++;
	    if (i < 4)
	    	break;
	} while (1);

	return 0;
}
```  

1. 1 
2. 1 2
3. 1 2 3
4. Compilation error. 

------ 
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
__Question 1:__ (1) It takes the control out of the loop.   

---- 
__Question 2:__ (2) `continue` statement ignores the statements within the loop that are present after it and takes the control to the beginning of loop.  

---- 
__Question 3:__ (4) 1  
- 0 represents a false condition.    

---- 
__Question 4:__ (1) 1  
- Non-negative numbers represent a true condition.    

---- 
