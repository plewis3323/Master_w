# include <iostream>
# include  <string>
# include <cmath> 
using  namespace std; 



// Ex. Using Operators 

int main ()
{
	
/* 
	int x = 100 +50;
	cout << x << "\n"; 
	
	int sum1 = 100 + 50;  // 150 (100 +50) 
	int sum2 =  sum1 + 250;  //  400 (150 + 250)
	int sum3 = sum2 + sum2; // 800 (400 + 400) 
	cout << sum1 << "\n" << sum2 << "\n" << sum3 << "\n\n";
*/	
	
/*
	int a = 5  ;
	int b = 2 ;
	// subtraction, Mult, Div, Modulus of a and b  
	cout << a - b << "\n" << a*b <<  "\n" << a % b; 
	
*/
	
	
/*
	int c =  7;
	int d = 99;
	++c;
	--d; 
	cout<< c << "\n" <<  d << "\n";
//Ex. using increment and decrement 	

	
	
	int x_1 = 10; 
	cout << x_1; 
	// Ex. using assign Operator (=)  setting  x_1 = 10
	
*/
	
	
/*
	
// Ex.  Using More assignments 
  int  a_1 = 90;
  int  a_2= 91 ;
  int  a_3 = 92;
  int a_4 = 93 ;
  int a_5 = 94 ;
  int a_6 = 95 ;
  
  a_1 %= 100;
  a_2 &= 101;
  a_3 |= 102;
  a_4 ^= 103;
  a_5  >>= 104;
  a_6 <<= 105 ;
  
  
  cout << a_1 << "\n";
  cout << a_2 << "\n";
  cout << a_3 << "\n";
  cout << a_4 << "\n";
  cout << a_5 << "\n";
  cout << a_6 << "\n" << endl;
  
  */
  
  
  /* 
  
  int x = 5; 
  int y = 3; 
  cout << (x<y) ;
  // returns 1 (true) because 5 is greater than 3
  
  
  */
  
  
  /* 
  // example of logical operators
  int x = 3;
  int y = 4; 
  cout << !( x < 3 && y >7) << endl; 
  */ 
  
 /*
  
string greeting = "Hello";
cout << greeting; 
  
  
  
  */
  
  
  
  // The + operator can be used between strings to add them together
  //   to make a new string. 
  // This is called concatenation:
  
  /*
  string FirstName = "John "; 
  string lastname = "Doe"; 
  string fullname = FirstName + lastname;
  cout << fullname;
  */
  
  
 // In the example above, we added a space after firstName to 
 // create a space between John and Doe on output. 
 // However, you could also add a space with quotes (" " or ' '):
 
 
 /*
string firstName = "John";
string lastname = "Doe"; 
string fullname = firstName + "  " + lastname; 
cout << fullname; 
*/

 //                       Append: 
 
  // A string in C++ is actually an object, 
  //  which contain functions that can perform certain 
  //  operations on strings. For example, you can also 
  //  concatenate strings with the append() function:
  
  
  // append () just also adds aditional string info to original string 
  
  /* 
  string firstname = "John"; 
  string lastname = "Doe"; 
  string fullname = firstname.append(lastname); 
  cout << fullname;
  */
  
  
  //                 3.2.2  Numbers and strings 
  
  /*  + operator can be used for addition of numbers and concatenation of 
        strings.  
  */ 
  
  // adding two numbers will result be another number. 
  
  
  /*
  int x = 10; 
  int y = 20; 
  int z = x + y; 
  cout << z; 
  */ 
  
  
  // Adding two strings result in concatenation. 
  
 /*
  string x = "10"; 
   string y = "20"; 
   string z =  x + y; 
   // z will be 1020 a string
   cout << z;
*/ 



// example of why you don't add string and number together 


/*
string x = "10"; 
int y = 20; 
string z = x + y; 
cout << z;    
*/ 


/*                                 3.2.3  String Length 


 - To get the length of a string, use the length() function:
 
 
 - Tip: You might see some C++ programs that use the size() function 
 to get the length of a string. This is just an alias of length(). 
 (Same type of functions) 
 It is completely up to you 
 if you want to use length() or size():
 
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " <<  txt.size();
  
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();  
  
  /*                       3.2.4  Access Strings 
  
  
  
  - You can access the characters in a string by referring to 
  its index number inside square brackets [].
  This example prints the first character in myString:
  
  
  - Note: String indexes start with 
  0: [0] is the first character. 
  [1] is the second character, etc.
  
  - This example prints 
    the second character in 
	my string 
 */ 
 
 
 /* 
 
 ex.)
 
 string myString = "Hello"; 
 cout << myString[0]; 
 // Outputs H 
 
 */
 
 /*
 ex.)
 
 string myString = "Hello"; 
 cout << myString[1]; 
 // Outputs e
 */
 
 
 /*                           Change String Characters 
 
 - To change the value of a specific character in a string, 
 refer to the index number, and use single quotes:
 */ 
 
 /*
 ex.) 
 
 string myString = "Hello"; 
 myString [0] = 'J'; 
 cout << myString; 
 // Outputs Jello instead of Hello
 */ 
 
 
 /*  --------------------------------------------------------------------------------------

                                    3.2.5:  User Input Strings 
--------------------------------------------------------------------------------------------

   -  It is possible to use the extraction 
      operator >> on cin to display a string entered by a user:
	  
    - However, cin considers a space (whitespace, tabs, etc) as a
    	terminating character, which means that 
	    it can only display a single word (even if you type many words):
 
     - That's why, when working with strings, we often use the 
	   getline() function to read a line of text. 
	   It takes cin as the first parameter, and 
	   the string variable as second:
 
 */
 
 
 /* 
 ex. 1) 
 
 string firstname; 
 cout  << "Type your first name: ";
 cin >>  firstname;  // get user input from computer 
 cout <<  "Your name is:  " << firstname; 
 
 */ 
 
 /* 
 ex. 2) 
 
 
 string fullname; 
 cout << "Type your full name: "; 
 getline (cin, fullname);
 cout << "Your name is:  " << fullname;
 
 */ 
 
 
 
 /*-----------------------------------------------------------------------------------
                  3.2.6 Omitting Namespace
				  
-------------------------------------------------------------------------------------------

-   You might see some C++ programs that runs without 
    the standard namespace library. The using namespace 
	std line can be omitted and replaced with the std keyword, 
    followed by the :: operator for string (and cout) objects:
	
-  Basically you have to as User put std:: for every string 
   and cout objects. 


*/    


/*
ex 1.) 

std :: string greeting = "Hello"; 
std :: cout << greeting; 

*/



/* -----------------------------------------------------------------------------------

                                 3.3   C++ Math 
								 
-----------------------------------------------------------------------------------------------

       -  C++ has many functions that 
	      allows you to perform mathematical 
		  tasks on numbers.				

       -     Max and min:  
	   The max(x,y)  and min (x,y) functions can 
	   be used to find the highest/lowest value of x and y:
	   
	   
	   -      C++  <cmath> Header: 
	   Other functions, such as sqrt (square root), 
	   round (rounds a number) and log (natural logarithm), 
	   can be found in the <cmath> header file:
	   
	   
*/

/*

ex 1.)

cout << max(5,10) << "\n";
cout << min(5, 10);

*/

/* 

ex 2.)

cout << sqrt(64) << "\n";
cout << round(2.6) << "\n";
cout<< log(2); 

*/


/* ---------------------------------------------------------------------------------------------

                         3.4  C++ Booleans 
			
			
--------------------------------------------------------------------------------------------------

-  Very often, in programming, you will need a data 
   type that can only have one of two values, like:
   
   *  Yes/NO 
   *  ON/OFF 
   *  True/False 
   
   
-    Boolean   Values: 

     * A boolean variable is declared with the bool 
	 keyword and can only take the values true or false:
	 
	 
-  From the example below, you can read 
that a true value returns 1, and false returns 0.
However, it is more common to return 
boolean values from boolean expressions (see next page).


- A Boolean expression is a C++ expression that returns a 
 boolean value: 1 (true) or 0 (false).
You can use a comparison operator, 
such as the greater than (>) operator to find 
out if an expression (or a variable) is true:


-  In the examples below, we use the 
   equal to (==) operator to evaluate an expression:
	 
*/ 


/* 

ex. 1) 

bool isCodingFun = true; 
bool isFishTasty = false; 
cout << isCodingFun << "\n";  //Outputs 1 (true)
cout << isFishTasty;   // Outputs 0 (false) 

*/ 


/* 

ex 2.) 

int x = 10; 
int y = 9; 
cout << (x > y); 

*/ 

/* 

ex 3.)

cout << (10 > 9); // returns 1 (true), because 10 is higher than 9

*/ 


/* 

ex 4.) 

int x = 10; 
cout << (x ==10); 

*/ 











	   






 
 
   
    

  
  
 

 
  
  
  
	return 0; 
	
} 


	