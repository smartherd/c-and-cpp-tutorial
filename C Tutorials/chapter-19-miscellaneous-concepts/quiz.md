## Chapter 19: Miscellaneous Concepts (Quiz with Solution)     

__Question 1: MCQ__     
Assuming we have all the required header files to execute this program, find the output? 
```C 
int r;
srand(time(NULL));
r = (rand() % 3) + 3; 
printf("%d", r); 
``` 
 
1. A random number from 4 to 6
2. A random number from 3 to 5 
3. A random number from 0 to 2
4. A random number from 1 to 3

----- 
 
__Question 2: MCQ__     
Find the output: 
```C
void findSum(int); 
int num1 = 20;
 
int main() {
	int num2 = 10;
	printf("main(): %d\n", num1 + num2);
	findSum(num1);
	return 0;
}
 
void findSum(int num2) {
	printf("sum(): %d\n", num1 + num2);
}
```
 
1. 	
```
main(): 30
sum(): 40
```
2. 	
```
main(): 40
sum(): 30
```
3. 	
```
main(): 30
sum(): 30
```
4. 	
```
main(): 40
sum(): 40
```

----- 

__Question 3: MCQ__     
Find the output: 
 
```C
void doSomething(int *, int);
 
int main() {
	int num1 = 10, num2 = 20;
	printf("%d\n", num1 + num2);
	doSomething(&num1, num2);
	printf("%d\n", num1 + num2);
	return 0;
}
 
void doSomething(int *num1, int num2) {
	*num1 = num2;
}
```
1. 	
```
40
30
```
2. 	
```
40
40
```
3. 	
```
30
30
```
4. 
```
30
40
```

----
 
__Question 4: Fill in the Blank__     
The address of the memory location where data is stored is in ____________ format. 
 
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
__Question 1:__ (2) A random number from 3 to 5   
- The expression `rand() % 3` will generate a random number from 0 to 2. If you add 3 to the result of the expression such as `(rand() % 3) + 3`, it will generate a random number from 3 to 5.    

---- 
__Question 2:__ (1) 
```
main(): 30
sum(): 40
```
- In `main()`, `num1` is a global variable with value 20 and `num2` is a local variable with value 10. Therefore, `num1` + `num2` = 30. 
- In `findSum()`, `num1` is a global variable with value 20 and `num2` is the formal argument to which we are passing the value of global variable `num1` using the function call within `main()`. Therefore, `num1` + `num2` = 20 + 20 = 40. 
   

---- 
__Question 3:__ (4) 
```
30
40
```   
- Before calling `doSomething()`, `num1` is 10 and `num2` is 20, so the output is 30. But in `doSomething()`, we are assigning the value of `num2` to `num1`. Since it is a ‘pass by reference’ so it modifies the original value of num1 within the main(). Therefore, after the execution of `doSomething()`, `num1` becomes 20. Henceforth, `num1` + `num2` is 40.    

---- 
__Question 4:__ Hexadecimal 

---- 
