## Chapter 8: Abstract Class (Code Challenge with Solution) 

Complete the given program based on the instructions provided in the comments in each class.   
 
```C
#include <iostream>
using namespace std;

class Shape {	// Should act like an abstract class or interface.  

	/* Complete the code */ 
	/* Define two pure virtual functions: getArea() and getPerimeter(). */ 
};

class Square : public Shape {

	/* Complete the code */ 
	/* Override appropriate methods and define 
	   appropriate attributes as required. */ 
	
};

class Rectangle : public Shape {
	
	/* Complete the code */ 
	/* Override appropriate methods and define 
	   appropriate attributes as required. */ 
};

class Circle : public Shape {

	/* Complete the code */ 
	/* Override appropriate methods and define 
	   appropriate attributes as required. */ 
};

class Triangle : public Shape {

	/* Complete the code */ 
	/* Override appropriate methods and define 
	   appropriate attributes as required. */ 
};

int main() {
	
   /* Create any one object among the 
	 * class Square, Rectangle, Circle, or Triangle and 
	 * print the area and perimeter. */

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

class Shape {

	public:
		virtual double getArea() = 0;
		virtual double getPerimeter() = 0;
};

class Square : public Shape {

	public:
		float side;

		virtual double getArea() {
			return side * side;
		}

		virtual double getPerimeter() {
			return 4 * side;
		}
};

class Rectangle : public Shape {

	public:
		float length;
		float breadth;

		virtual double getArea() {
			return length * breadth;
		}

		virtual double getPerimeter() {
			return 2 * (length + breadth);
		}
};

class Circle : public Shape {

	public:
		float radius;

		virtual double getArea() {
			return 3.14 * radius * radius;
		}

		virtual double getPerimeter() {
			return 2 * 3.14 * radius;
		}
};

class Triangle : public Shape {

	public:
		float base;
		float height;
		float side1;
		float side2;

		virtual double getArea() {
			return (base * height) / 2;
		}

		virtual double getPerimeter() {
			return base + side1 + side2;
		}
};

int main() {

  Circle circle;
  circle.radius = 10;
  double area = circle.getArea();
  double perimeter = circle.getPerimeter();

  cout << "The area and the perimeter of the circle is " << area << " square units and " << perimeter << " units respectively." << endl;

  return 0;
}

```
