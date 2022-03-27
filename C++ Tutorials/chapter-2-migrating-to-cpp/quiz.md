## Chapter 2: Migrating to C++ (Quiz with Solution)     

__Question 1: MCQ__     
Find the output: 
 
```C 
bool isCodingFun = true;
int num = 20;
cout << (isCodingFun + true) * num;
``` 
 
1. 20
2. 40 
3. 0
4. Error 

---- 
 
__Question 2: MCQ__     
Which of the following function declarations does not follow the rule of function overloading?     

1.     
```
void display(int, int)
void display(string, string)
```
2. 
```
void display(int, int)
int display(string, string)
```
3. 
```
float display(string, string)
float display(double, double, int)
```
4. 
```
int display(int, int)
void display(int, int)
```

---- 
 
__Question 3: MCQ__     
Find the output: 
```C
void display(string country = "India", int);
 
int main() {
	display(7);
	return 0;
}
 
void display(string country, int num) {
	country = "China";
	cout << country << endl << num << endl;
}
``` 

1. Compilation error
 
2. 	
```
India
7
```
3. 	
```
China
7
```

4. `India 7` 
 
----- 
 
4. Assuming the following code snippet is valid, find the output? 
```C
string num1 = "3";
string num2 = "4";
int num3 = 3;
int num4 = 4;

cout << num1 + num2 << " " << num3 + num4;
```
 
1. `7 34` 
2. `34 7` 
3. `34 34` 
4. `7 7` 
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
__Question 1:__ (1) 40   
- Numeric representation of `true` is 1. Therefore, `(isCodingFun + true) * 20` is equivalent to `(1 + 1) * 20`.    

---- 
__Question 2:__ (4) 
``` 
int display(int, int)
void display(int, int)
``` 
- In function overloading, you must have a different number of parameters and/or parameters of different data types. The return type does not play any role in function overloading. 

---- 
__Question 3:__ (3) Compilation Error   
- The default parameters must be defined from right to left in the function declaration.    

---- 
