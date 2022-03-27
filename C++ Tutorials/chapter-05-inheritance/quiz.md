## Chapter 5: Inheritance (Quiz with Solution)     

__Question 1: Match the Column__     
Match the following with the most appropriate option. 

| Column 1 | Column 2 | 
|:--------|:--------| 
| One base class and one derived class | Hierarchical inheritance | 
| Multiple base classes and one derived class   |  Hybrid inheritance  | 
| One base class and multiple derived classes  |  Single inheritance | 
| A derived class being derived from a class that is already derived inheritance | Multiple inheritance | 
| A mixture of two or more inheritance |  Multilevel inheritance | 

----- 
 
__Question 2: MCQ__     
In the context of inheritance, a child class is also known as: 
1. derived class or superclass 
2. subclass or derived class 
3. subclass or base class 
4. base class or subclass 

----- 
 
__Question 3: MCQ__     
In the context of inheritance, a parent class is also known as: 
1. superclass or base class
2. superclass or derived class
3. base class or derived class
4. subclass or superclass

----- 
 
__Question 4: MCQ__     
Given a superclass Vehicle, and a subclass Car, which of the following represents a correct relation between the two classes? 
1. 
```
class Car : public class Vehicle {
	// some code 
}; 
```
2. 
```
class Vehicle : public Car {
	// some code 
}; 
```
3. 
```
class Car : public Vehicle {
	// some code 
}; 
```
4. 
```
class Vehicle : public class Car {
	// some code 
};
```
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
__Question 1:__ 
| Column 1 | Column 2 | 
|:--------|:--------| 
| One base class and one derived class | Single inheritance | 
| Multiple base classes and one derived class   | Hierarchical inheritance | 
| One base class and multiple derived classes  | Multiple inheritance | 
| A derived class being derived from a class that is already derived inheritance | Multilevel inheritance | 
| A mixture of two or more inheritance | Hybrid inheritance |


---- 
__Question 2:__ (2) subclass or derived class   
- The class that inherits properties from another class is called child class or derived class or subclass.    

---- 
__Question 3:__ (1) superclass or base class   
- The class whose properties are inherited by a child class (subclass) is called the parent class or base class or superclass.    

---- 
__Question 4:__ (3) 
```
class Car : public Vehicle {
	// some code
}; 
```
- The  syntax to represent a relationship between a subclass and a superclass in inheritance is: `class <SubclassName> : public <SuperclassName> {};`  

---- 
