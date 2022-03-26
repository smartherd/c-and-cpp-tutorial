## Chapter 16: Pointers (Quiz with Solution)     

__Question 1: Fill in the Blank__     
A pointer is __________ data type.

----- 
__Question 2: MCQ__     
Find the output of the following code snippet:
```C
int nums[] = { 3, 41, 50, 1, 22};
int *ptr = nums;
printf("%d", *(ptr + 2));
```

1. 3
2. 50
3. 1
4. Invalid output 

----- 

__Question 3: MCQ__     
Find the output of the following code snippet:
```C
int nums[] = { 3, 41, 50, 1, 22};
int *ptr = nums;
ptr = ptr + 2;
printf("%d", *(ptr + 2));
```

1. 22
2. Invalid output 
3. 50
4. 1

----- 

__Question 4: MCQ__     
Find the output of the following code snippet:
```C
int nums[] = {3, 41, 50, 1, 22};
int *ptr;
ptr = nums;

printf("%d\n", *ptr++);
printf("%d\n", *++ptr);
printf("%d\n", *ptr++ + *++ptr);
```

1. 	
```
41
50
23
```

2. 	
```
3
50
72
```

3. 	
```
3
50
23
```

4.	
```
41
41
72
```

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
__Question 1:__ derived   

---- 
__Question 2:__ (2) 50  
- `ptr + 2` will make `ptr` to store the address of `num[2]` i.e. 50. `*(ptr + 2)` will give us the value 50.    

---- 
__Question 3:__ (1) 22   
- Firstly, `ptr = ptr + 2` will make `ptr` to store the address of `num[2]` i.e. 50. 
- Next, `ptr + 2` will further make `ptr` to shift two elements towards the right of the array and store the address of `nums[4]` i.e. 22. 
- Finally, `*(ptr + 2)` will be equivalent to the value 22. 
   

---- 
__Question 4:__ (2) 
```
3
50
72
```
- In the first print statement, `*ptr++` is a postfix expression. This will print 3 and then `ptr` will be incremented by 1. 
- Now, `ptr` is pointing to element 41.
- In the second print statement, `*++ptr` is a prefix expression. First `ptr` will be incremented by 1 i.e. `ptr` will start to point to the element 50 and then it will print 50.
- In the last print statement, for the expression `*ptr++ + *++ptr` the evaluation will start from left since it is an addition of two numbers. `*ptr++` will give 50. The ptr will be incremented by 1 i.e. ptr will start pointed to element 1. Then `*++ptr` will give 22. So the expression `*ptr++ + *++ptr` will be equivalent to `50 + 22` which is 72. 
   
---- 
