## Chapter 16: File Handling (Quiz with Solution)     

__Question 1: MCQ__     
Match the following with their most appropriate description. 
| Column 1 | Column 2 |
|:--------|:--------|
| fstream  | Creates a file if it doesn’t exist  |
| open() |  Returns true if no data found |
| close() |  Write on a file |
| eof() |  File Streams header file |
| ofstream  |  Effective for memory management  |
| ifstream  |  Read from a file |

----- 

__Question 2: MCQ__     
Which of the following describes the `eof()` function of Input File Stream class?  
1. `EOF` stands for End Of File and returns false if the end of file is reached. 
2. Returns true if the end of file is reached, false otherwise
3. Returns false if the end of file is reached, true otherwise
4. `EOF` stands for End Of File and returns true if it finds a valid data on the file

---- 
 
__Question 3: MCQ__     
Assuming the following code is executable, what code is missing and must be included in the given program considering good programming practice while handling files in C++? 
```C
ofstream file;
file.open("my-file.txt");
file << "Hello";
``` 
 
1. Creating the file if it doesn’t exist by using `create()` function 
2. While loop together with `eof()` function to check the end of file
3. Checking the end of the file by using `eof()` function
4. Closing the opened file by using `close()` 

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
__Question 1:__ 
| Column 1 | Column 2 |
|:--------|:--------|
| fstream  | File Streams header file |
| open() |  Creates a file if it doesn’t exist |
| close() |  Effective for memory management |
| eof() |  Returns true if no data found |
| ofstream  |  Write on a file |
| ifstream  |  Read from a file |


---- 
__Question 2:__ (2) Returns true if the end of file is reached, false otherwise  
- The `eof()` function returns true if the end of file is reached, false otherwise.    

---- 
__Question 3:__ (4) Closing the opened file by using `close()`   
- When a file is opened, then it must be closed so that the system can effectively clean up memory that was once allocated to that file. It is considered a good programming practice and must be followed while handling files in C++.    

---- 
