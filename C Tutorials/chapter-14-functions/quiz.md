## Chapter 14: Functions (Quiz with Solution)     

__Question 1: MCQ__     
Which of the following is not present in a function prototype?
1. Function body (code)
2. Return type
3. The data type of function parameters
4. Function name

---- 

__Question 2: MCQ__     
Which of the following is a user-defined function? 
1. `puts()`
2. `strcat()` 
3. `print()`
4. `strlen()` 


---- 

__Question 3: MCQ__     
Find the output: 

```C
#include <stdio.h>

void greetUser();

int main() {

	greetUser();
	puts("World");
	puts("World");
	greetUser();
	greetUser();

	return 0;
}

void greetUser() {

	puts("Hello");
}

```

1. 
```C 
Hello
Hello
World
World
Hello
``` 

2. 
```C 
World
Hello
World
Hello
Hello
``` 

3. 
```C 
Hello
World
World
Hello
Hello
``` 

4. 
```C 
Hello
World
World
Hello
World
``` 
-----

__Question 4: MCQ__     
Find the output: 

```C
#include <stdio.h>

int modify(int);

int main() {

	int x = 10;

	int result = modify(x);

	printf("%d", result);

	return 0;
}

int modify(int i) {

	i++;
	++i;
	i--;
	i = i * 10;
	--i;
	i = i / 10;

	return i;
}
```

1. 100
2. 90
3. 9
4. 10

----- 

__Question 5: MCQ__     
Find the output: 

```C

#include <stdio.h>

int modify(int);

int main() {

	float x = 50.8;

	float result = modify(x);

	printf("%.1f", result);

	return 0;
}

int modify(int i) {
	return i * 10;
}

```

1. 508
2. 500.0
3. 508.0
4. 500

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
__Question 1:__ (1) Function body (code)  
- The function body is never a part of the function prototype.    

---- 
__Question 2:__ (3) `print()`  
- There is no built-in function named as print().    

---- 
__Question 3:__ (3) 
```C  
Hello
World
World
Hello
Hello
``` 

---- 
__Question 4:__ (4) 10  
- The inline code explanation: 
```C  
	i++;	// i = 11
	++i;	// i = 12
	i--;	// i = 11
	i = i * 10;	// i = 110
	--i;		// i = 109
	i = i / 10;	// i = 109 / 10 = 10
``` 
- In the last statement `i = i / 10` is equivalent to 109/10 which is 10.9. Since `i` is an integer so it cannot store value present after decimal. We lose 0.9 due to type conversion and hence `i` becomes 10 instead of 10.9. 
  

---- 
__Question 5:__ (2) 500.0   
- Due to type conversion, `float 50.8` was first converted to `int 50`. Then it was multiplied by 10 within the `modify` function. So `int 500` was returned from the modify function. Since the `result` variable is of the `float` data type, due to type conversion `int 500` was converted back to `float`. Hence, the `float result` becomes 500.0.    

---- 
