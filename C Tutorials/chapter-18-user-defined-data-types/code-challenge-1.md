## Chapter 18: User-defined Data Types (Code Challenge with Solution) 

WAP to store details of a book using Structure. The details of the book should contain:
- Title
- Author
- Price
Define the details of any two of your most favourite books that you have read.
 
Use the given program as the starting point for this code challenge.
 
```C
#include <stdio.h>

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
#include <stdio.h>
#include <string.h>

struct Book {

	char title[20];
	char author[20];
	float price;
};

int main() {

	struct Book book1, book2;
	strcpy(book1.title, "Harry Potter");
	strcpy(book1.author, "J. K. Rowling");
	book1.price = 1200;

	printf("Book details: \n Title: %s \n Author Name: %s \n Price: Rs. %0.2f\n\n", book1.title, book1.author, book1.price);

	strcpy(book2.title, "War and Peace");
	strcpy(book2.author, "Leo Tolstoy");
	book2.price = 900;

	printf("Book details: \n Title: %s \n Author Name: %s \n Price: Rs. %0.2f\n\n", book2.title, book2.author, book2.price);

	return 0;
}

```
