## Chapter 18: User Defined Data Types (Quiz with Solution)     

__Question 1: MCQ__     
Based on the enum given below, find the output? 
Enum: 
```C
enum day {  
    SUN = 1, MON, TUE = 5, WED, THU = 10, FRI, SAT
};
```
 
```C
printf("%d %d", WED, SAT); 
```
 
1. 6 8
2. 6 12
3. 4 7
4. 4 12 

------ 
 
__Question 2: Match the Column__     
Match the following user-defined data types with their appropriate description.  

| Type | Description |
|:--------|:--------|
| Structure  | Can store information in one field at a time |
| Union  |  Assign names to integral constants |
| Enum  |  Stores a collection of dissimilar data types |

------
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
__Question 1:__ (2) 6  12   
- The enum value TUE is 5. Therefore the subsequent enum values of WED becomes 6. Similarly, since THU is assigned a value of 10, therefore FRI and SAT become 11 and 12 respectively.    

---- 
__Question 2:__ 
| Type | Description |
|:--------|:--------|
| Structure  | Stores a collection of dissimilar data types |
| Union  |  Can store information in one field at a time  |
| Enum  | Assign names to integral constants  |

---- 
