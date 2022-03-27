## Chapter 3: Class and Object (Code Challenge with Solution) 

WAP to create a class for the dog (maybe a pet dog). 
- Define data members such as age, color, breed, and it’s pet name. 
- Define a function to print all the data members.
- Declare two objects for the class Dog, initialize their attributes and then print all the data members by calling a function. 
 

Use the given program as the starting point for this code challenge.
 
```C
#include <iostream>
#include <string>
using namespace std;

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

class Dog {	// Defining class

	public:	// public section 
		string breed;
		int age;
		string color;
		string petName;

		void displayDetails();	// Method declaration 
};

void Dog :: displayDetails() {	// Method definition
	cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}

int main() {

	// Creating dog object 
	Dog dog1;
	dog1.breed = "Dalmatian";
	dog1.age = 7;
	dog1.color = "White-black";
	dog1.petName = "Jackie";
	dog1.displayDetails();

	// Creating dog object 
	Dog dog2;
	dog2.breed = "Beagle";
	dog2.age = 4;
	dog2.color = "Brown";
	dog2.petName = "Pluto";
	dog2.displayDetails();

	return 0;
}

```
