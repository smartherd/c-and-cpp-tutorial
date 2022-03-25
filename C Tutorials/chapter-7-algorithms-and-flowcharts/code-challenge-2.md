## Chapter 7: Code Challenge with Solution 

#### Problem Statement 
A restaurant gives a discount of 10% if the total customer bill including 5% tax is greater than or equal to Rs. 1000. 

Write a program for the problem statement mentioned above and print the next payable amount as applicable.  

__Note__: The customer bill needs to be entered by the user and total bill including 5% tax needs to be calculated in the program. If the customer is eligible for the discount, then calculate the net payable amount and print it. 
 

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

int main() {

	// Code challenge solution

	float bill, tax, totalBill, netPayableAmount;

	puts("-----------------------------------");
	puts("------------ Welcome --------------");
	puts("-----------------------------------\n\n");

	puts("Enter bill: ");	// User input 
	scanf("%f", &bill);

	tax = bill * 5/100;	// Calculate tax

	totalBill = bill + tax;	// Calculate total bill 

	// If the total bill is greater than or equal to Rs. 1000 then apply a discount. 
	if (totalBill >= 1000) {
		netPayableAmount = totalBill * 0.9;
		printf("Net payable amount after discount: %.2f", netPayableAmount);
	} else { 	// Else don’t apply for a discount. 
		netPayableAmount = totalBill;
		printf("Net payable amount: %.2f", netPayableAmount);
	}

	return 0;
}

```
