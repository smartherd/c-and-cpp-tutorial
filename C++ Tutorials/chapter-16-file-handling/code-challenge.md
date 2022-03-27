## Chapter 16: Code Challenge (Code Challenge with Solution) 

Write a program to save your name and age in the given format in a file. Your name and age should be taken as user input. Once you write data on the file, write code to read data from the file and print the data in the output console.
``` 
My name is Sriyank Siddhartha.
I am 22 years old.
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
#include <fstream>
#include <iostream>
using namespace std;

int main() {

	// Part 1: Write on a file.
	ofstream oFile;
	oFile.open("my-bio.txt");

	string name;
	int age;

	// User input. 
	cout << "Enter name: ";
	getline(cin, name);

	cout << "Enter age: ";
	cin >> age;

	oFile << "My name is " << name << ". \n";
	oFile << "I am " << age << " years old. \n";

	oFile.close();

	// Part 2: Read from a file.
	string str;

	ifstream iFile;
	iFile.open("my-bio.txt");

	cout << "\nReading data from the file: \n\n";

	while(!iFile.eof()) {
		getline(iFile, str);
		cout << str << endl;
	}

	iFile.close();

	return 0;
}

```
