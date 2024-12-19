#include <iostream>
#include <cmath> 
#include <string>
#include <array>
using namespace std; 



/* -------------------------------------------------------------------------------------------------

                                                    Comments 
													
----------------------------------------------------------------------------------------------------


*  The // command is only for comments on a single line. 

*  The /*  command is for using and wanting to make multiline 
    comments
   
* The next example is called doxygen comments (/**) similiar to /* but they 
    start with the double star. 
	
*  Also for doxygen comments are used to be specific about 
    details of the code that let developers know how to recreate it. 
   
* Comments are removed from the source code by the compiler during the 
   translation process into machine code. 
   
 */ 
 
 
 
 // simple comment for integer declaration
 int i; 
 
 
 /* multiline comment
  * in case we need to say more. 
  */ 
double d; 

/** 
* Best Choice : doxygen compatible comments
* \fn bool isOdd(int i)
* \brief checks whether i is odd
*\param i input 
*\return true if i is odd, otherwise false
*/ 
bool isOdd(int i); 



/*

- The code block contains several key ingredients C++ syntax. 

- The #include plus <> basically is called preprocessor directives that 
   allows us to call libraries, classes, and functions to use.  
   
- Also you can acess items using a header files command. 
  #include "MyHeader.h" 
 
- Code contains two functions print and main. Each of the functions have a 
  return value, and arguments (argc; argv of type int and char**) 
  
- The main function function is a special function, this is basically 
  where code is executed upon and to compile.  
  
- std:: cout << .. is basically the print execution of code. 
 */ 


/*

ex 1.) 

// This is a function 
void print(int i) {
	std::cout << "Hello World!" << i << std::endl; 
}

int main (int argc, char** argv) {
	int n = 3; 
	for (int i = 0; i < n; i++) {
		print(i);
	}
	return 0;
}

*/


/* ---------------------------------------------------------------------------------------------

                                             Basic  Types
											 
------------------------------------------------------------------------------------------------
*/ 


/*

bool b = true;       //boolean, true or false

char c = 'a';   //8 bits ASCII character 
char*s  = "a C string"; // array of chars ended by \0
std::string t = "a C++ string"; // class provided by the STL

char c = -3;                    // 8 bits signed integer
signed char c = -3;             // 8 bits signed integer
unsigned char c = 4;            // 8 bits unsigned integer

short int s = -444;             // 16 bits signed integer
unsigned short s = 444;         // 16 bits unsigned integer
short s = -444;                 // int is optional

int i = -123456;                // 32 bits signed integer
unsigned int i = 1234567;       // 32 bits signed integer

long l=0L;                      // 32 or 64 bits (ptr size)
unsigned long l = 0UL;          // 32 or 64 bits (ptr size)

long long ll = 0LL;             // 64 bits unsigned integer
unsigned long long l = 0ULL;    // 64 bits unsigned integer

float f = 1.23f;                // 32 (23+7+1) bits float
double d = 1.23E34;             // 64 (52+11+1) bits float

int main () {
	std :: cout << s << std :: endl; 
	return 0; 
}

*/ 


/* 

- Above are all the basic C++ data types. 

- The variable in the first line is of type boolean 
  (bool). The value for this type can only be true or false.
  
- The next block denotes character variables. 
  The char type can hold any ASCII character. 
  The first line in this block of type char contains a 
  single character. Note the single parenthesis 
  to contain the value. The second line denotes 
  a pointer to char (we will learn about pointers 
  (*) in a later section) and can contain multiple characters. 
  While char* is also used in C the std::string` 
  type is a more powerful C++ object and can 
  also contain multiple characters. Note that both 
  values are surrounded by double parenthesis.


-  Signed values represent the totality of data values 
    that something can be stored upon.  
	

- each of these data types differ because of numerics, text values, 
  memory address storage and bits each have.  
  
  
*/


/* --------------------------------------------------------------------------------------------------

                                                   Arrays  and  Vectors
												   
------------------------------------------------------------------------------------------------------

- Containers are what we call arrays in C++.  

- auto is a useful data type for iterator types.  

- In Scientific Computing we usually need to group data types together 
   except for using and acessing one by one.  
   
- In C++ we can create arrays for any type of obects
*/ 


/* 

ex.)

int main () {
	array<double, 4>  four_vector{2.,3.,4.,-10.}; 
	cout << "This 4-vector has a time component:" <<"\t"
	 << four_vector[3] << endl;
		
	four_vector[3] = 7.5;
	cout << "This 4-vector has t-comp:" << "\t" << four_vector[3] << endl;
	
	return 0; 
}

*/

/* 

- To use arrays they are part of C++ libraries so to access
   call the header file array.  
   
- to define an array using syntax like this:
   array <Type, Number>. 
   
 - This is called a template in C++.  think of it as a way to 
    declare array type and amount of arguments
	
-  unfiform initialization just allows us to intialize data types 
   in collection such as if we want array of doubles 
   {a, b, c, d} think of this as inputing data argument. 
   
- The compiler accesses and read the array from size 0 to n-1. 
   n represents total amount of stuff inside array.
*/





	
 
 