## Chapter 13: Preprocessor Directives (Code Challenge with Solution) 

Define a Macro preprocessor directive that contains the code to find the area of a rectangle. 
- The Macro should accept two parameters: length and breadth of the rectangle.
 
```C
#include <iostream>	
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
using namespace std;

#define AREA(l, b) (l * b)	// Adding macro 

int main() {

	// Find the area of a rectangle.
	cout << "Area: " << AREA(15, 10);

	return 0;
}

```
