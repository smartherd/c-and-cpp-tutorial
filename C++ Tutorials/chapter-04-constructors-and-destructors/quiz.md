## Chapter 4: Constructors and Desctructors (Quiz with Solution)     

__Question 1: MCQ__     
Given the following code snippet is a part of a valid c++ program, find the error? 
```C 
class Fruit {

  public:
    string name;
    float pricePerKg;
 
    Fruit() {	// Default constructor 
}
		
int Fruit (int kg) {	// Parameterized constructor 
      return kg * pricePerKg;
    }
};
``` 
 
1. The default constructor must not be blank when defined. 
2. The parameterized constructor must be declared outside the class. 
3. A constructor cannot return any data. 
4. The parameterized constructor can only take parameters to initialize the data members.

----- 
 
__Question 2: MCQ__     
Given the following code snippet is a part of a valid c++ program, find the error? 
```C 
class Fruit {
 
  public:					
    string name;	
    float pricePerKg;
    Fruit() {}
    int calculatePrice(int kg) {
      return kg * pricePerKg;
    }
};
``` 
 
1. The definition of the default constructor is invalid. 
2. The default constructor must not be blank when defined. 
3. A parameterized method must be declared outside the class. 
4. The code is correct. 

---- 
 
__Question 3: Match the Column__     
Match the following: 

| Column 1 | Column 2 |
|:--------|:--------|
| Default constructor | Multiple constructors with the same name but different parameters. |
| Parameterized constructor |  Copies one object to another |
| Class  |  A special method with parameters |
| Object  |  Executed when the object is being created |
| Constructor overloading  |  Real world entity that has state and behaviour. |
| Copy constructor  |  A special method with no parameters |
| Destructor  |  A template that defines attributes and method common to all entities of the same kind. |
| Constructor  |  Executed when the object is being deleted |

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
__Question 1:__ (3) A constructor cannot return any data.   
- It is the property of the constructor that it cannot return any data.    

---- 
__Question 2:__ (4) The code is correct.   

---- 
__Question 3:__   
| Column 1 | Column 2 |
|:--------|:--------|
| Default constructor | A special method with no parameters  |
| Parameterized constructor |  A special method with parameters |
| Class  |  A template that defines attributes and method common to all entities of the same kind. |
| Object  |  Real world entity that has state and behaviour.  |
| Constructor overloading  |  Multiple constructors with the same name but different  |
| Copy constructor  |  Copies one object to another |
| Destructor  |  Executed when the object is being deleted |
| Constructor  |  Executed when the object is being created  |

---- 
