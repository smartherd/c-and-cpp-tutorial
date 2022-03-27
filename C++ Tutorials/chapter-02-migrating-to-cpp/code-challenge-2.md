## Chapter 2: Migrating to C++ (Code Challenge with Solution) 

Modify the following program to get each data as user input. Also, use appropriate user-friendly messages to improve the user experience.  

```C
#include <iostream>
#include <string>
using namespace std;

int main() {

	string name = "India";
	char dollar = '$';
	float gdp = 2.2;
	int year = 2015;

	cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

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

int main() {

	string name = "India";
	char dollar = '$';
	float gdp = 2.2;
	int year = 2015;

	cout << "Enter country name:";
	getline(cin, name);

	cout << "Enter dollar symbol:";
	cin >> dollar;

	cout << "Enter GDP:";
	cin >> gdp;

	cout << "Enter year:";
	cin >> year;

	cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

	return 0;
}
```
