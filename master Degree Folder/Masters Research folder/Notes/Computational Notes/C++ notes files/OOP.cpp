#include <iostream>
#include <string> 
#include <cmath> 
using namespace std; 


/* ---------------------------------------------------------------------------------------------

                              7.1 C++ OOP 
							  
------------------------------------------------------------------------------------------------



-  OOP stands for Object-Oriented Programming.

- Procedural programming is about writing procedures or 
  functions that perform operations on the data, while 
  object-oriented programming is about creating 
  objects that contain both data and functions.

- step by step action programming is procedural programming. 
   Also allows for creation of functions that are part of the process. 

- Object oriented programming is about creating objects that 
  contain and store functions and data. 
  
                         OOP vs. Procedural Programming: 
						 
* OOP is faster and easier to execute 
* OOP provides a clear structure to the programs.  
* OOP helps to keep C++ code from repeating itself, easier to 
   maintain, modify and debug. 
* OOP makes it possible to create full reusable applications
  with less code, and shorter development time. 
  
 - Classes are a template for objects, objects are an instance of a class.  
 - Individual objects inherit all variables and functions from the class.  
 
 - Question: What is a class and object in C++ programming? 
   (using simple language) 
   
 */
 
 
 /*-----------------------------------------------------------------------------------------------
 
                                     7.2 C++ Classes/Objects
							
--------------------------------------------------------------------------------------------------


-  C++ is an object-oriented programming language.

- Everything in C++ is associated with classes and objects, 
  along with its attributes and methods. For example: in real life, 
  a car is an object. The car has attributes, 
  such as weight and color, and methods, such as drive and brake.
 
- Attributes and methods are basically variables and 
   functions that belongs to the class. 
   These are often referred to as "class members".
   
- A class is a user-defined data type that we can use in
  our program, and it works as 
  an object constructor, or a "blueprint" for creating objects.
  

                                          Create An Object: 

- In C++, an object is created from a class. We have already created 
  the class Myclass, so we now can use this to create objects.  
  
-  To create an object of Myclass, specify the class name, followed by the 
    object name. 
	
- To acess the class attributes use the dot syntax. on the object specified 
   to a specifc attribute inside the class.  
  (for mynum and myString) 
  
*/

/*

ex 1.)

// Create a class

class Myclass{ // The class 
    public:  // Access specifier 
	   int myNum; // Attribute (int variable)
	   string mystring; // Attribute (string variable)
};

int main () {
	Myclass myObj; // create an object of Myclass. 
	
	
	// Access attributes and set values
	myObj.myNum = 15; 
	myObj.mystring = "Text"; 
	
// print attribute values

cout << myObj.myNum << "\n";
cout << myObj.mystring; 
return 0; 
}

*/

/*

- public: is called an access specifier, which specifies that members
  (attributes and methods) of the class are accesible outside the class. 
  
 - Inside Class myNum and myString are attributes of class. 
 
 */ 
 
 
 /* 
 
 ex 2.) 
 
 
 // Create a Car class with some attributes 
 
 class Car {
	 public: 
	    string brand; 
		string model; 
		int year; 
 }; 
 
 int main () {
	 // Create an object of Car 
	 Car  carObj_1; 
	 carObj_1.brand  = "BMW"; 
	 carObj_1.model = "X5"; 
	 carObj_1.year = 1999; 
	 
	 // Create another objec of car 
	 Car carObj_2; 
	 carObj_2.brand =  "Ford"; 
	 carObj_2.model = "Mustang"; 
	 carObj_2.year = 1969; 
	 
	 //Print attribute values
	 cout << carObj_1.brand << " " << carObj_1.model << " " 
	 << carObj_1.year << "\n"; 
	 
	 cout << carObj_2.brand << "  " << carObj_2.model << "  "
	 << carObj_2.year << "\n"; 
	 
	 return 0; 
	 
 }
 
 */ 
 
 
 /* --------------------------------------------------------------------------------------------------
 
 
                                               7.3  C++  Class Methods
											   
--------------------------------------------------------------------------------------------------------

- Methods are functions that belongs to the class. 

- there are two ways to define functions that belongs to a class: 
   
     * Inside Class definition. 
	 * Outside Class definition 

- In the following example, we define a function inside the class, 
  and we name it "mymethod". 
  
*/ 

/* 

ex 3.) 

class MyClass {  // the class 
     public:           // Access specifier 
	    void myMethod() {  // method-function defined inside class 
		      cout << "Hello World!"; 
		}
}; 

int main () {
	MyClass myObj; // Create an object of MyClass 
	myObj.myMethod(); // Call the method 
	return 0; 
}


- To define outside the class definition, declare it inside the class. 
   Define it outside the class. This is done by specifying the name 
   of class, followed by scope-resolution operator (::) followed 
   by function name. 



*/ 


/* 

ex 4.) 


// Outside Function class example 

class MyClass { // the class 
    public: // Access specifyer
	    void myMethod(); // Method-function declaration
}; 

// Method-Function definition outside the class 
void MyClass::myMethod() {
	cout << "Hello world!"; 
}


int main () {
	MyClass myObj; // create an object of Myclass 
	myObj.myMethod(); // call the method
	return 0; 
}

*/ 

/*

ex 5.)

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}

*/ 

/*----------------------------------------------------------------------------------------------

                                               7.4  C++ Constructors 
											   
									
----------------------------------------------------------------------------------------------------

- A constructor in C++ is a special method that is automatically 
   called when an object of a class is created.  
   
- To create a constructor, use the same as the class, followed by 
   parenthesis (): 
   
   
 */ 
 
 
 /* 
 
 ex 6.)
 
 class MyClass {  // The class
       public:      // Access specifier
	   MyClass() { //Constructor 
	              cout << "Hello world!"; 
	   }
 }; 
 
 
 int main() {
	 MyClass myObj; // create an object of Myclass (this calls the constructor.
	 return 0; 
 }
 
 */
 
 /* -------------------------------------------------------------------------------------------------
 
                                              Constructor Parameters
											  
-----------------------------------------------------------------------------------------------------

- Constructors can also take parameters (Like functions), which 
   can be useful for setting initial values of attributes. 
   
 */ 
 
 
 /* 
 
 ex 7.) 
 
 class Car {
	 public: 
	    string brand; 
		string model; 
		int year; 
		Car(string x, string y, int z) {
			brand = x; 
			model = y; 
			year = z; 
		}
 }; 
 
 int main () {
	 Car C_1("BMW", "X5",  1999);
	 
	 Car C_2("Ford", "Mustang", 1969);
	 
	 cout << C_1.brand << " " << C_1.model << "  "
	 << C_1.year << "\n"; 
	 
	 cout << C_2.brand << " " << C_2.model << "  "
	 <<C_2.year << "\n"; 
	 
	 return 0; 
	 
 }
 
 */ 
 
 
 
 
 
 





 
	 
	 
 

	   
 
  
 
 