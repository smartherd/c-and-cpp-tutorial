## Chapter 2: Migrating to C++ (Code Challenge with Solution) 

WAP to print out: `As economic reforms picked up the pace, India's GDP grew five-fold to reach US$2.2 trillion in 2015 (as per IMF estimates).`

You need to define separate variables for `India`, `$`, `2.2`, and `2015`. Use appropriate data types for each literal and accordingly print the statement using corresponding format specifiers. 
 

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
