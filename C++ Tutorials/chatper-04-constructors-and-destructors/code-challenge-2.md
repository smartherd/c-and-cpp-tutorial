## Chapter 4: Constructors and Desctructors (Code Challenge with Solution) 

Given the following program:
- Add a parameterized constructor that initializes all the attributes during object creation.
- Create dog objects by calling the parameterized constructor. 


```C
#include <iostream>
#include <string>
using namespace std;

class Dog {

	public:
		string breed;
		int age;
		string color;
		string petName;

		void displayDetails();

		Dog();
};

Dog :: Dog() {
	cout << "Dog object created\n";
}

void Dog :: displayDetails() {
	cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}

int main() {

	Dog dog1;
	dog1.breed = "Dalmatian";
	dog1.age = 7;
	dog1.color = "White-black";
	dog1.petName = "Jackie";
	dog1.displayDetails();

	Dog dog2;
	dog2.breed = "Beagle";
	dog2.age = 4;
	dog2.color = "Brown";
	dog2.petName = "Pluto";
	dog2.displayDetails();

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

class Dog {

	public:
		string breed;
		int age;
		string color;
		string petName;

		void displayDetails();

		Dog();
		Dog(int, string, string, string);	// Parameterized constructor declaration 
};

Dog :: Dog() {
	cout << "Dog object created\n";
}

// Parameterized constructor definition  
Dog :: Dog(int age, string breed, string color, string petName) {
	this->age = age;
	this->breed = breed;
	this->color = color;
	this->petName = petName;
}

void Dog :: displayDetails() {
	cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}

int main() {

	// Initializing object using parameterized constructor 
	Dog dog1(7, "Dalmatian", "White-black", "Jackie");
	dog1.displayDetails();

	// Initializing object using parameterized constructor 
	Dog dog2(4, "Beagle", "Brown", "Pluto");
	dog2.displayDetails();

	return 0;
}

```
