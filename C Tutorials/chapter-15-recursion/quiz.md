## Chapter 15: Recursion (Quiz with Solution)     

__Question 1: MCQ__     
Find the output of the following code snippet: 

```C
void modify(int);

int main() {

	modify(2);

	return 0;
}

void modify(int n) {

	if (n == 1) 
		printf("Hello ");

	if (n > 0) {
		printf("World %d\n", n--);
		modify(n);
	}
}

```

1. Stack overflow error  
2. 
```
World 2
Hello World 1
```
3. 
```
World 1
Hello World 0
```
4. 
```
Hello 
```
----- 

__Question 2: MCQ__     
Match the following with their most appropriate description.  

| Column 1 | Column 2 |
|:--------|:--------|
| Recursive function  | I am a process where a function calls itself. |
| Recursion  |  I am a function call to execute myself. |
| Recursive call  |  I play a key role in preventing stack overflow error. |
| Terminating condition  |  I call myself recursively. |

---- 
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
__Question 1:__ (2)   
```
World 2
Hello World 1
```
- In function call `modify(2)`:
    - The condition `n == 1` is `false` and `n > 0` is `true`. We get `World 2` in the output. 
- In the recursive call `modify(1)`:
    - The condition `n == 1` is `true` and `n > 0` is `true` too. We get `Hello World 1` in the output. 

---- 
__Question 2:__  
| Column 1 | Column 2 | 
|:--------|:--------| 
| Recursive function  | I call myself recursively. |
| Recursion  |  I am a process where a function calls itself.  |
| Recursive call  |  I am a function call to execute myself.  |
| Terminating condition  | I play a key role in preventing stack overflow error. |
---- 
