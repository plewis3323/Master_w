 # include <iostream>
# include  <string>
# include <cmath> 
using  namespace std; 


/*---------------------------------------------------------------------------------------------------

                                              6.1  C++ Functions
											 
----------------------------------------------------------------------------------------------------

-  A function is a block of code which only runs when it's called.  

- You can pass data, known as parameters, into a function. 

- Functions are used to perform certain actions, and they are important 
  for resusing code: Define the code once and use it many times.  
  
                                              Create A Function: 
											  
- C++ provides some pre-defined functions, such as main(), which is used 
   to execute code. But you can also create your own functions to 
   perform certain actions.  
   
 - To create (often referred to as declare) a function, specify the name 
    of function, followed by parenthesis (): 
	
	ex 1.) 
	
	void myFunction () {
		
		// code to be executed 
		
	} 
	
                                            Example explained: 
									
* myFunction() is the name of the function. 
* void means that function does'nt have a return value.  
  return values are later in the chapter. 
  
 * Inside the function (the body), add code that defines what the function 
    should do.  
	
                                             Call A function: 
											 
- Declared functions are not executed immediately. Are executed once 
  called upon. 
  
- To call a function; write the function's name followed by two parenthesis
  and a semicolon. 
  
 - In next exampe myFunction() will be called upon and print a text. 
  */
  
  
  
 /*
  
  // ex. 1 (call function inside main) 
  
  void myFunction() {
	  
	  cout << "I just got executed!";
  }
  
  int main () {
	  
	  myFunction (); 
	  return 0; 
  } 
  
 // Will output I just got executed. 
 
 */ 
 
 
 // A function can be called upon multiple times
 
 
 /* 
 
 ex 2.)
 
 void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!

*/ 

/* -------------------------------------------------------------------------------------------------

                                          Function Declaration and Definition 
										  
-------------------------------------------------------------------------------------------------

- A c++ function consists of two parts: 
     * Declaration: the function's name, return type, and parameters (if any) 
	 * Definition: the body of the function (code to be executed) 
	 
- ex 3.) void myFunction() { // **declaration**

      // the body of the function (**definition**) 
	  
} 


- If a user defined function is declared after main then an error will occur. 
  C++ works top bottom, that means functions must be declared before main. 
  After main if its declared then main would be unaware of it.  
  
  
*/ 

/* 

ex 4.)

int main() {
	myFunction();
	return 0; 
	
} 

void myFunction () {
	
	cout << "I just got executed!"; 
	
} 

// wil produce an error.  (Not declared in scope) 


*/ 

/* 

- Another way of coding is to declare user-functions before main, run 
  and call block of code in main, at the end write user-function definition.  
  
*/ 


/* 

ex 4.) 

 void myFunction(); 
 
 int main () {
	 
	 myFunction(); 
	 return 0; 
 } 
 
 void myFunction() 
 { 
 
 cout  << " I just got executed!"; 
 
 } 
 
 */
 
 /* -------------------------------------------------------------------------------------------
 
                           6.2  C++ Function Parameters 
						   
-----------------------------------------------------------------------------------------------------


- Information can be passed to functions as a parameter. Parameters act as 
  variables inside the function. 
  
- Parameters are specified after the function name usually inside the 
  parenthesis. You can add as many parameters as you want,  just seperate 
  with commas.  
  
- ex 5.)   

    void function_name(para_1, para_2, para_3) {
		
		// code to be executed. 
		
	}
	
- Following function takes string values as parameters.  
  When function is called we pass with defined first name along with 
  last. 
  
 */ 
 
 
 /* 
 ex 6.)
 
 void my_Funct (string fname) {
	 cout << fname  << "Lewis \n"; 
 }
 
 int main () {
	 my_Funct("Parker");
	 my_Funct("Halle");
	 my_Funct("Collin");
	 return 0; 
 } 
 
 // Outputs all the names.  
 
 
 
 /* ---------------------------------------------------------------------------------------
 
                                       6.2.1 Default Parameter 
									
									
--------------------------------------------------------------------------------------------

- You can also use a default parameter value, by using the equal sign (=) 
   If we call the function without an argument, it uses the default value. 
   
 */ 
 
 
/* 

ex 7.) 

void my_funct(string country (optional parameter) = "Norway") {
	cout << country << "\n"; 
}

int main () {
	my_funct("Swedan");
	my_funct("India");
	my_funct();
	my_funct("America");
	return 0; 
	
}


*/ 

/* -------------------------------------------------------------------------------------------------

                                               6.2.2  Multiple Parameters 
											 
-----------------------------------------------------------------------------------------------------

- Inside a function when declaring and defining you 
  the user can have multiple parameters at a time.  
  
*/ 


/* 

ex 8.)

void my_Function(string fname, int age) {
	cout << fname << "Lewis." << age << " years old. \n";
}

int main () {
	my_Function("Liam", 3); 
	my_Function("Jenny", 14); 
	my_Function("Anja", 30); 
	return 0; 
}

*/ 

/* -----------------------------------------------------------------------------------------------

                                               6.2.3 Return Values 
											 
-----------------------------------------------------------------------------------------------------

- The void keyword, used in previous examples, indicates that the function
   should not return a value. if you want the function to return a value, 
   you can use a data type instead of void and use the return the keyword 
   inside the function. 
   
   
*/ 

/* 

ex 9.) 

int myFunction(int x) {
	return 5 +x; 
}

int main () {
	cout << myFunction(3); 
	return 0; 
}

*/ 

/* 

ex 10.) 

int myfunction(int x, int y) {
	return x +y; 
} 


int main () {
	cout << myfunction(5,3); 
	return 0; 
	
} 

*/ 

/* 

ex 11.)

int myFunction(int x, int y) {
	return x+y; 
}

int main () {
	int z = myFunction(5,3); 
	cout << z; 
	return 0; 
}

*/ 

/* --------------------------------------------------------------------------------------------------

                                                 6.2.4  Pass By Reference 
												 
-----------------------------------------------------------------------------------------------------


- You can also pass a reference to the function. This can be useful when 
   variable change needs to happen for the value of the arguments.  
   
   
*/ 


/* 

ex 12.) 


void swap_nums(int &x, int &y) {
	int z = x; 
	x = y; 
	y = z; 
}

int main () {
	int first_n = 10; 
	int sec_n = 20; 
	
	cout << "Before swap:  " << "\n"; 
	cout << first_n << sec_n << "\n"; 
	
	swap_nums(first_n, sec_n);  // call the function to switch values.
	
	cout << " After swap:  " << "\n"; 
	cout << first_n << sec_n << "\n"; 
	
	return 0; 
	
}

*/ 

/* ---------------------------------------------------------------------------------------------

                                        6.3 C++ Function Overloading 
										
---------------------------------------------------------------------------------------------------


- with function overloading, multiple functions can have the same name with 
   different parameters: 
   
   
   
 - ex 13. ) 
 
 int my_function(int x) ; 
 float my_function( float x); 
 double my_function(double x, double y); 
 
 
   
   
*/ 


/* 

ex 14.) 


int plus_func_Int(int x, int y) {
	return x +y; 
} 

double plus_func_double(double x, double y) {
	return x + y; 
} 

int main () {
	int my_N1 = plus_func_Int(8,5); 
	double  my_N2 = plus_func_double(4.3, 6.26); 
	cout << "Int: " << my_N1 << "\n"; 
	cout << "Double: " << my_N2; 
	return 0; 
	
} 

*/ 

/* 

ex 15.) 

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;  
}

// example of overloading

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}

*/ 







	
	












      
 
 
 
  
 