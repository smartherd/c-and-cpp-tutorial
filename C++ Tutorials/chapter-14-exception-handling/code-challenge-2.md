## Chapter 14: Exception Handling (Code Challenge with Solution) 

The following program contains multiple compile time errors. Spot the errors and fix them.

Approach: 
- First, paste the faulty in Eclipse IDE and check for warning/messages being shown in the editor. 
- Next, run the program. Since it has compile time errors, the execution of the program will stop and it will show you compile time errors as messages under problems tab and console tab. Analyze those messages and fix the errors. 

```C
#include <iostream>
#include <string>
using namespace std;

class Employee {

	private:
		string phNo;

	public:
		string name;

		void setPhoneNumber(string phoneNumber) {
			this->phNo = phoneNumber;
		}
}

void display(Employee); 

void display(Employee emp) {
	cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}

int main() {

	Employee employee;
	employee.setPhoneNumber("+91-809362221");
	employee.name = "Rishi Raj";

	display(employee);

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

class Employee {

	private:
		string phNo;

	public:
		string name;

		void setPhoneNumber(string phoneNumber) {
			this->phNo = phoneNumber;
		}
}

void display(Employee); 

void display(Employee emp) {
	cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}

int main() {

	Employee employee;
	employee.setPhoneNumber("+91-809362221");
	employee.name = "Rishi Raj";

	display(employee);

	return 0;
}

</Faulty Code>

<SOLUTION>

#include <iostream>
#include <string>
using namespace std;

class Employee {

	private:
		string phNo;

	public:
		string name;

		void setPhoneNumber(string phoneNumber) {
			this->phNo = phoneNumber;
		}

		friend void display(Employee); // Friend function declaration was required
};	// Semi-colon was missing from class definition 

void display(Employee emp) { 
	cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}

int main() {

	Employee employee;
	employee.setPhoneNumber("+91-809362221");
	employee.name = "Rishi Raj";

	display(employee);

	return 0;
}

/* Explanation 
While running the faulty program, at the compilation stage the program execution will stop. Under the problems tab or console tab, you will get two noticeable errors.
1.	Error: expected ';' after class
1.	Solution: A class definition requires a semi-colon at the end. 
2.	Error: 'phNo' is a private member of 'Employee'
2.	Solution: You cannot access a private member of a class inside a function which is defined outside the class. So you must declare that function as a friend function within the class under the public section. 
*/


```
