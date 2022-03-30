/*
	Author: 	Sriyank Siddhartha (Youtube: Smartherd)
	Chapter: 	Constructors and Destructors 
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {

	public:					// Access specifier
		int id;				// Attribute or data member
		string firstName;	// Attribute or data member
		string lastName;	// Attribute or data member

		Employee();			// Default constructor declaration
		Employee(int, string, string);	// Parameterized constructor declaration

		string getFullName() {		// Method/function definition
			return firstName + " " + lastName;
		}

		void displayDetails();		// Method/function declaration
};

Employee :: Employee(int id, string firstName, string lastName) {	// Parameterized constructor
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
}

Employee :: Employee() {	// Default constructor definition
	cout << "Employee object created\n";
}

void Employee :: displayDetails() {	// Method/function definition
	cout << "ID: " << id << endl << "Name: " << getFullName() << "\n\n";
}


int main() {

	// Create an object of Employee class
	Employee emp1(1, "Rahul", "Sharma");

	// Print attribute values
	emp1.displayDetails();

	// Another employee object
	Employee emp2;
	emp2.id = 2;
	emp2.firstName = "Yajat";
	emp2.lastName = "Agrawal";

	emp2.displayDetails();

	return 0;
}
