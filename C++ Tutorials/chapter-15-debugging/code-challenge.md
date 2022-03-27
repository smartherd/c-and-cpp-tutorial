## Chapter 15: Debugging (Code Challenge with Solution) 

You have already seen the following program to find out the square root of a number `n` entered by the user.
- The square root of a number is always positive or 0. 
- Use debugger and find out the which line of code is unable to produce results when the user enters a negative value of `n`
- Once you spot the faulty code, handle the exception accordingly.

Note: In this code challenge, it is first important for you to understand how to use the breakpoint, and features like step over, step into, and step out to find out at which statement an exception needs to be handled. 

```C
#include <iostream>
#include <cmath>
using namespace std;

void findSquareRoot(float n);

int main() {

	// Find the square root of 'n' entered by the user.
	cout << "Program starts -->" << endl << endl;

	float n;

	cout << "Enter n: ";
	cin >> n;

	findSquareRoot(n);

	cout << "<-- Program ends" << endl;

	return 0;
}

void findSquareRoot(float n) {

	float result = sqrt(n);
	cout << "Result: " << result << endl << endl;
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
#include <cmath>
using namespace std;

void findSquareRoot(float n);

int main() {

	// Find the square root of 'n' entered by the user.
	cout << "Program starts -->" << endl << endl;

	float n;

	cout << "Enter n: ";
	cin >> n;

	findSquareRoot(n);

	cout << "<-- Program ends" << endl;

	return 0;
}

void findSquareRoot(float n) {

	try {
		if (n < 0) {
			throw "The value of 'n' must be greater than or equal to 0. Please try again.";
		}

		float result = sqrt(n);
		cout << "Result: " << result << endl << endl;
	} catch (const char *msg) {
		cout << msg << endl << endl;
	}
}

```
