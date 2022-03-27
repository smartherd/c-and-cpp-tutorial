## Chapter 11: Namespaces (Quiz with Solution)     
 
__Question 1: MCQ__     
Using namespace you can: 
1. Create multiple variables of the same data type.  
2. Create variables, functions, or classes with the same name.
3. Create functions with the same name but with different parameters.
4. Create only variables or functions with the same name. 

---- 
 
__Question 2: MCQ__     
Find the output: 
```C
#include <iostream>
using namespace std;
 
namespace myNameSpace {
	int x = 300;
}
 
int x = 100;	// Global variable
 
int main() {
	int x = 200;	// Local variable
	cout << x << “\n”;
	cout << myNameSpace::x;
	return 0;
}
```
1. 	
```
100
300
```
2. 	
```
200
300
```
3. 	
```
300
300
```
4. 	
```
100
200
``` 
----- 
 
__Question 3: MCQ__     
Find the output: 
```C
#include <iostream>
using namespace std;
 
namespace myNameSpace {
	int x = 300;
}
 
int x = 100;	// Global variable
 
using namespace myNameSpace;
 
int main() {
 
	int x = 200;	// Local variable
	cout << x << '\n';
	cout << myNameSpace::x << '\n';
 
	return 0;
}
```
 
1. 	
```
200
300
```
2. 	
```
300
300
```
3. 	
```
100
300 
```
4. 	
```
200
100
```

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
__Question 1:__ (2) Create variables, functions, or classes with the same name.   
- A namespace can contain variables, functions, or classes with the same name.    

---- 
__Question 2:__ (2) 
```
200
300
```  
- The statement `cout << x << “\n”` will print the value of the local variable `x` and the statement `cout << myNameSpace::x` will print the value of the variable defined within the defined namespace.   

---- 
__Question 3:__ (1) 
```
200
300
```   
- The statement `cout << x << “\n”` will print the value of the local variable `x` and the statement `cout << myNameSpace::x` will print the value of the variable defined within the defined namespace.   

---- 
