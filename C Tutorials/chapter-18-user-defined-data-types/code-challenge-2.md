## Chapter 18: User-defined Data Types (Code Challenge with Solution)  

WAP to store details of a book using Union and print the details. The details of the book should contain:
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

union Book {

	char title[20];
	char author[20];
	float price;
};

int main() {

	union Book book1, book2;

	puts("Book details:");

	strcpy(book1.title, "Harry Potter");
	printf(" Title: %s \n", book1.title);

	strcpy(book1.author, "J. K. Rowling");
	printf(" Author Name: %s \n", book1.author);

	book1.price = 1200;
	printf(" Price: Rs. %0.2f\n\n", book1.price);

	puts("Book details:");

	strcpy(book2.title, "War and Peace");
	printf(" Title: %s \n", book2.title);

	strcpy(book2.author, "Leo Tolstoy");
	printf(" Author Name: %s \n", book2.author);

	book2.price = 900;
	printf(" Price: Rs. %0.2f\n\n", book2.price);

	return 0;
}

```
