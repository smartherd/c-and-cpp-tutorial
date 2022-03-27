## Chapter 2: Migrating to C++ (Code Challenge with Solution) 

Modify the following program to get each data as user input. Also, use appropriate user-friendly messages to improve the user experience.  

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

	cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

	return 0;
}
```
