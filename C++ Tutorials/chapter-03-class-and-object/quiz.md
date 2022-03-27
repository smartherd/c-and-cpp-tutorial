## Chapter 3: Class and Object (Quiz with Solution)     
 
__Question 1: MCQ__     
The class is a _________ data type.
1. Primary
2. Derived
3. User Defined 
4. None of these

---- 
 
__Question 2: MCQ__     
Given the following code snippet is a part of a valid c++ program, find the error? 
```C
class Student {
	public:					
		int id;				
		string firstName;	
		string lastName;
};
 
void Student::display() {
	cout << "ID: " << id << endl << "Name: " << firstName << " " << lastName << "\n\n";
}
```

1. The method `display()` must be declared inside the class.
2. The method declaration of `display()` is missing inside the class. 
3. There should be no semicolon at the end of a class definition. 
4. The code is absolutely correct. No error. 
 
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
__Question 1:__ (1) User Defined   

---- 
__Question 2:__ (2) The method declaration of `display()` is missing inside the class.   
- While defining method outside the class requires method declaration inside the class.    

---- 
