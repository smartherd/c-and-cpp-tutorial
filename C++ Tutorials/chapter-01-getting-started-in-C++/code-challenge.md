## Chapter 1: Getting Started in C++ (Code Challenge with Solution)   

Write a program to print your name and age in the following format in two separate lines: 
```
My name is Sriyank Siddhartha.
I am 28 years old.
```
Replace `Sriyank Siddhartha` with your full name and put your age in place of `28`. Try printing the same statements in two ways: 
1. By using `\n` 
2. By using `endl` 

Use the given program as the starting point for this code challenge. 

```C
#include <iostream>

int main() {

    return 0;
}
```
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

```C
#include <iostream>
using namespace std;

int main() {

	// Using \n
	cout << "I am Sriyank Siddhartha.\nI am 28 years old.";

	// Adding extra lines for clean output
	cout << endl << endl;

	// Using endl
	cout << "I am Sriyank Siddhartha." << endl << "I am 28 years old.";

	return 0;
}

```
