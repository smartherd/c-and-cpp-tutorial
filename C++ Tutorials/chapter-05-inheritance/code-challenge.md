## Chapter 5: Inheritance (Code Challenge with Solution) 

Given the following program, apply inheritance to reduce code redundancy by creating a superclass Person. 

Use the given program as the starting point for this code challenge.

```C
#include <iostream> 
#include <string> 
using namespace std; 

class Student {

  public:
    int studentId;
    int age;
    string fullName;
    string phoneNumber;
    string schoolName;
		
    void study() {
      cout << "Studying" << endl;
    }
};

class Employee {

  public:
    int employeeId;
    int age;
    string fullName;
    string phoneNumber;
    string companyName;

    void work() {
        cout << "Working" << endl;
    }
}; 

int main() { 

  return 0; 
} 

```
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

```C 
#include <iostream>
#include <string>
using namespace std;

class Person {

  public:
    int age;
    string fullName;
    string phoneNumber;
};

class Student : public Person {

  public:
    int studentId;
    string schoolName;

    void study() {
      cout << "Studying" << endl;
    }
};

class Employee : public Person {	// Applying inheritance and making changes accordingly 

  public:
    int employeeId;
    string companyName;

    void work() {
      cout << "Working" << endl;
    }
};

int main() {

  return 0;
}

```
