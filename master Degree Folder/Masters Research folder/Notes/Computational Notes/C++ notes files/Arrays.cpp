 # include <iostream>
# include  <string>
# include <cmath> 
using  namespace std; 


int main () 
{
	
	
/* -----------------------------------------------------------------------------------------------------

                                             5.1 C++ Arrays 
											 
--------------------------------------------------------------------------------------------------------


-  Arrays are used to store multiple values in a single variable, 
  instead of declaring separate variables for each value.
  
-  To declare an array, define the variable type, specify the name of the 
    array followed by square 
    brackets and specify the number of elements it should store:
	
- ex.  string (Variable-type)  cars (variables)[4] (arrays with number of items
	                                                                          it stores) 
																			  
-  cont ex.)  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

- ex. of array of 3-integers:   int myNum[3] = {10,20,30}; 

- ex. acessing array elements:  key note is to access the index number,
        string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
		cout << cars[0];
		// Outputs Volvo
		
		
- next is show how to change an array element.
		
*/


/*

ex 1.)


// changing array element.
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0]; 
// Now outputs Opel instead of volvo

*/ 


/*

ex 2.)

string cars [4] = {"Volvo", "BMW", "Ford", "Mazda"}; 
cout << cars[0];
// outputs volvo

*/ 



/* ---------------------------------------------------------------------------------------------

                                         5.1.1  Arrays and Loops
										 
------------------------------------------------------------------------------------------------


- You can loop through the array elements with the for loop.

- The following example outputs all elements in the cars array: 

*/

/*

ex 1.)

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
for (int i =0;  i < 4; i++) {
	cout << cars[i] << "\n";
}

// This loop basically iterates and outputs items in array. 

*/ 


/*

ex 2.)

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; 
for (int i =0; i < 4; i++) {
	cout << i << " : " << cars[i] << "\n"; 
}

// This example basically outputs the idex of each element along with its 
    value. 

*/ 

/* -------------------------------------------------------------------------------------------------

                                           5.1.2 Omit Array size 
										   
-----------------------------------------------------------------------------------------------------

- You don't always have to specify the array size, But if you don't, 
   its only be as big as the elements that are inserted in.  
   


- string cars[] = {"Volvo", "BMW",  "Ford"};  //here the array size is 3. 
   cout << cars; 
   
 - This is fine. However, the problem arises if you want extra space for
    future elements. Then you have to overwrite the existing elements
	values. 
	
- ex. ) string cars[] = {"Volvo", "BMW", "Ford"}; (XXXXXX)

          string cars[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
		  
- If you specify the size however, the array will reserve the extra space;

- ex.)   string cars[5] = {"Volvo", "BMW", "Ford"}; // size of array
           is 5, even though it's only three elements inside it. 
		   
- It is also possible to declare an array without specifying the elements on 
  declaration, and add them later:
                   (this is basically called Omits elements on Declaration) 

		   

*/ 

/* 

ex 1.)

	string cars[5] = {"Volvo", "BMW",  "Ford"};
	cars[3] = "Mazda"; 
	cars[4] = "Tesla"; 
	for (int i = 0; i < 5; i++) {
		cout << cars[i] << "\n";
	}
	
*/ 



/*

ex 2.) 

string cars[5]; 
cars[0] = "Volvo";
cars[1] = "BMW"; 
cars[2] = "Ford";
cars[3] = "Mazda";
cars[4] = "Tesla"; 

for ( int i = 0; i < 5; i++) {
	cout << i << ":" << cars[i] << "\n"; 
}

*/ 

/* ------------------------------------------------------------------------------------------------

                                          5.2 C++ Refrences
						
-----------------------------------------------------------------------------------------------------

- A reference variable is a "reference" to an existing variable, and is created 
  with the & operator:
  
  string food = "Pizza";  // food variable 
  string &meal = food; // this is a refrence variable to food.  
  
- Now, we can use either the variable name food or the reference name 
   meal to refere to the food variable: 
   
  */
  

/* 

ex 1.)

string food = "Pizza"; 
string  &meal = food; 

cout << food << "\n";  // Outputs Pizza 
cout << meal << "\n"; 

*/ 


/* --------------------------------------------------------------------------------------

                                      5.2.1  Memory Address
									  
------------------------------------------------------------------------------------------


-  In the example we can also acess memory allocation of the 
   reference variable. It's assigned to a memory address.  
   
 */ 
 
 /* 
 
 ex 1/)
 
 
 string food = "pizza"; 
 
 cout << &food; //Outputs 0x6dfed4 or any memory allocation 
 
 // the reference operator applied to a variable gives a memory 
 // address 
 
 */ 
 
 /* ------------------------------------------------------------------------------------------------------
 
                                              5.3 C++ Creating Pointers 
											
----------------------------------------------------------------------------------------------------------

-  We can get the memory address of a variable using the & operator.  

- A pointer however, is a variable that stores the memory  
   address as its value. 
   
- A pointer variable points to a data type (like int or string) of the same type, 
  and is created with the * operator. The address you're working with is 
  assigned to the pointer. 

*/


/*

// ex. 1)

string food = "Pizza";  // A food variable of type string 

cout << food << "\n"; //Outputs the value of food (Pizza) 

cout <<  &food;  // Outputs memory address of food. 

*/ 


/*

//ex 2.)

string food = "Pizza"; // A food variable of type string
string* ptr = &food;  // A pointer variable, with the name ptr, that stores 
                                // the address of food.  
								
// Outputs the value of food (Pizza) 
cout << food << "\n"; 

// Outputs the memory address of food

cout << &food << "\n"; 

// Outputs the memory address of food with pointer

cout << ptr << "\n"; 

*/ 

/* ----------------------------------------------------------------------------------------------

                                                5.3.1  Dereferencing 
												
-------------------------------------------------------------------------------------------------


-  & operator on a variable outputs the memory address of value. 
    This is called referencing and is basically what pointers are.  
	
- The * operator applied to a pointer doesn't ouput memory value, but
   actuall valued stored to original variable, this is called derefrencing.  
   
- The * operator applied to datatype in declaration is what creates 
   a pointer, but actually applying * operator on a pointer gives original 
   output of variable.  
   
 */ 
 
/*

 // ex. 1) 

 
 string food = "Pizza"; 
 
 string* ptr = &food;  
 
 cout << ptr << "\n"; 
 
 cout << *ptr << "\n"; 
   
 */ 
 
 
/* -------------------------------------------------------------------------------------------------


                                                  5.3.2  Modify Pointers
												  
---------------------------------------------------------------------------------------------------


- You can also change the pointer's value. But note that this will also change 
   the value of the original variable: 
   
   
 */ 
 
 /*
 
 ex .1) 
 
 
 string food = "Pizza"; 
 string* ptr = &food; 
 
 cout << food << "\n"; 
 cout << &food << "\n"; 
 cout << *ptr << "\n"; 
 *ptr = "Hamburger"; 
 cout << *ptr << "\n";
 cout << food << "\n"; 
 
 */ 
 
 
 
 
 
 
 








 
 
 
 
 
 






  
  





return 0; 
}