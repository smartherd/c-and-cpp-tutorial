## Chapter 6: Access Specifiers (Code Challenge with Solution) 

Given the following program. 
- There is an error in the given program. 
- Try to figure out which attribute or method is wrongly placed under a particular access specifier. 
- Without modifying the code with the main function, make the program executable. 
 
 
```C
class Person {

  private:
    string phoneNumber;

  public:
    string fullName;

    void setPhoneNumber(string phoneNumber) {
      this->phoneNumber = phoneNumber;
    }
}; 

class Employee : public Person {

  private:
    float salary;

  protected:
    void addBonus(float bonus) {
      this->salary = this->salary + bonus;
    }

  public:
    int id;

    void setSalary(float salary) {
      this->salary = salary;
    }

    void displaySalary() {
      cout << "Current salary: " << salary;
    }
};

int main() {

  Employee employee;
  employee.id = 1;
  employee.fullName = "Aditya Sharma";
  employee.setPhoneNumber("+91-887700132");
  employee.setSalary(35000);
  employee.addBonus(4000);
  employee.displaySalary();

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

  private:
    string phoneNumber;

  public:
    string fullName;

    void setPhoneNumber(string phoneNumber) {
      this->phoneNumber = phoneNumber;
    }
};

class Employee : public Person {

  private:
    float salary;

  public:
    int id;

    void setSalary(float salary) {

      this->salary = salary;
    }

    void addBonus(float bonus) {
      this->salary = this->salary + bonus;
    }

    void displaySalary() {
      cout << "Current salary: " << salary;
    }
};

int main() {

  Employee employee;
  employee.id = 1;
  employee.fullName = "Aditya Sharma";
  employee.setPhoneNumber("+91-887700132");
  employee.setSalary(35000);
  employee.addBonus(4000);
  employee.displaySalary();

  return 0;
}

/*
The function ‘addBonus’ in the class Employee should be present under the public section so that it can be accessed from outside the class i.e. from the ‘main’ function. Therefore, the protected section in class Employee was not required. 
*/

```
