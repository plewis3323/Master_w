# include <iostream>
# include  <string>
# include <cmath> 
using  namespace std; 



int main () 
{
	
	
	/* -----------------------------------------------------------------------------------------------------------------
	
	                            4.1  C++ conditions (if statements) 
							
							
	---------------------------------------------------------------------------------------------------------------------
	
	
	-  C++ supports the use of logic statements from 
	    mathematics 
		
		
	* Less than:  a < b 
	* less than or equal to:  a <=b 
	* greater than: a >b 
	* greater than or equal to: a >=b 
	* equal to:  a ==b 
	* Not equal to: a !=b 
	
	-  You can use the conditions to perform different 
	    actions for different decisions. 
		
	- C++ has the following condition statements: 
	
	 * Use if to specify a block of code to be executed, 
	    if a specified condition is true. 
	 * use else to specify a block a code to be executed, if the same 
	   condition is false. 
	 * Use else if to specify a new condition to test, 
	    if thw first condition is false. 
	 * use switch to specify many alternative blocks of code 
	    to be executed.  
		
		
	-  if (condition) 
		
		{  // block of code to be executed if the condition is true
		
		}
		
		
		
	-  In the example above we use two variables, x and y, to
    	test whether x is greater than y (using the > operator). 
		As x is 20, and y is 18, and we know that 20 is 
	   greater than 18, we print to the screen that 
	   "x is greater than y".
		
	*/ 
	
	
	
	/* 
	
	ex. 1) 
	
   if ( 20 > 18)  // Condition is true.
   {
	   
	   cout << "20 is greater than 18";
	   
	   
   }
   
   */
   
   
   
   
   
/* 

ex 2.) 
  
   int x = 20; 
   int y = 18; 
   
   if (x > y)
   {
	   
	   cout << " x is greater than y";
	   
   }
   
   
 */
 
 
 /* ------------------------------------------------------------------------------------------
 
                                 4.1.1      Else 
 
 ----------------------------------------------------------------------------------------------
 
 
 -  use the else statement to specify a block of code to be executed 
    if the condition is false. 
	
	
-  if (condition) {
	
	// block of code to be executed if the condition is true 
	
} else {
	
	// block of code to be executed if the condition is false 
	
} 


*/


/* 

 ex 1.) 
 
 
int time =   20; 

if (time < 18) {
	
	cout << "Good day.";
	
} else {
	
	cout << "Good evening."; 
	
}

// Outputs "Good evening." 

*/


/* --------------------------------------------------------------------------------------------------

                                            4.1.2    else if
				 
----------------------------------------------------------------------------------------------------


-  use the else if statement to specify a new condition if the first condition
   is false 
   
   
 - if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the 
     condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and 
     condition2 is false
}
	

*/


/* 

ex 1.) 


int time  = 22; 

if (time < 10) {
	
	cout << "Good morning. ";
	
} else if ( time < 20) {
	
	cout << " Good day. ";
	
} else {
	
	cout << "Good evening.";
	
}

// Outputs "Good evening ." 
// Basically this example is a way of showing how to go from 
    one condition to another to ouput a code.

*/


/* -----------------------------------------------------------------------------------------

                                         4.1.3  Short Hand If ... Else 
 
-------------------------------------------------------------------------------------------------


- There is also a short-hand if else, which is known as 
   the ternary operator because it consists of three operands. 
   It can be used to replace multiple lines of code with a single line. 
   It is often used to replace simple if else statements:
   
 - variable = (condition) ? expressionTrue : expressionFalse;
 
 
*/


/* 

ex 1. )

int time = 20; 

string result  = (time < 18) ? "Good day." : "Good evening. " ; 

cout << result;

*/


/* ----------------------------------------------------------------------------------------------


                                       4.2    C++   Switch 
									   
	-------------------------------------------------------------------------------------------------
	
	
	-  Use the switch statement to select 
	    one of many code blocks to be executed.
		
		
	- Basically run the code block that corresponds to specific case
	  that matches with expression. 
	  
	  
	  
	 - switch(expression) {
       case x:
       // code block
       break;
       case y:
       // code block
       break;
       default:
       // code block
       }
	   
	   -  This is how it works: 
	   
	   *  The switch expression is evaluated once 
	   *  The value of the expression is compared with the values 
	       of each of the case 
		   
	   *  If there is a match, the associated block of code is executed 
	   
	   *  the break and default keywords are optional, and will be described 
	       later in this chapter.  
		   
		   
	- the example below uses the weekday number  to calculate the weekday name: 
	
	
	*/
	
/*
	
	
int day = 4; 


switch (day) {
	
	case 1: 
	     
		  cout << "Monday "; 
		  
		  break; 
		  
	case 2: 
	
	      cout << "Tuesday "; 
		  
		  break; 
		  
	case 3: 
	
	     cout << "Wednesday";
		 
		 break; 
		 
	case 4: 
	
	     cout << "Thursday "; 
		 
		 break; 
		 
	case 5: 
	
	     cout << "Friday"; 
		 
		 break; 
		 
	case 6: 
	
	     cout << "Saturday"; 
		 
		 break; 
		 
	case 7: 
	
	    cout << "Sunday"; 
		
		break; 
		
}  // Outputs  "Thursday" ( day 4) 

*/

/* -------------------------------------------------------------------------------------------
 
                                           4.3 C++ While Loop 
										   
----------------------------------------------------------------------------------------------


-  Loops can execute a block of code as long as a specified condition 
   is reached 
   
- Loops are handy because they save time, reduce errors, and they make 
  code more readable 
  
  
 -   The While loop loops through a block of code as long as a specified 
      condition is true 
	  
-    while (condition) {
	
	             //   code of block to be executed 
				 
}

- In the example below, the code in the loop will run, over and over 
  again as long as a variable (i) is less than 5: 

*/


/* 

ex. 1) 

int i = 0; 
while ( i < 5) 
{
	cout << i << "\n";
	i ++; 
	
}

*/ 

/* ---------------------------------------------------------------------------------------------

                                  4.3.1  Do/While Loop 
								  
------------------------------------------------------------------------------------------------

- The do/while loop is a variant of while loop.
   The loop will execute block as longs as the condition is true.  
   Then the loop keeps reapeating as long condition is true.  
   
- This loop will always be executed once even if condition is false. 
  
- do { 
  
     // code block to be executed
	 
  } 
  
  while (condition) ; 
  
  
 - The example below uses a do/while loop. The loop will always be executed
    at least once, even if the condition is false, because the code block is 
	executed before the condition is tested.  
	
	
*/ 

/* 

ex. 1)

int i = 0; 

do {
	
	cout << i << "\n"; 
	i++; 
	
} 

while (i  <  5); 

*/

/* ---------------------------------------------------------------------------------------
 
                                           4.4 C++ For Loop 
										   
-----------------------------------------------------------------------------------------------

- when you know exactly how many times you want to loop through a block 
   of code, use the for loop instead of a while loop: 
   
 - for (statement 1; statement 2; statement 3) {
	 
	 // code of block to be executed 
	 
 } 
 
- statement 1: is executed (one time) before execution of code block. 
   (This is the initialization:  ex. i = 0) 
   
- statement 2: defines the actual condition before code execution. 

- statement 3: This is the iteration part, basically keep running and 
                      iterate until conditional is false.


*/ 


/* 

ex 1 & 2.) 

for (int i = 0; i < 5; i++) {
	
	cout << i << "\n";
	
}

for (int i = 0; i <= 10; i = i+2) {
	
cout << i << "\n";

} 

*/

/* ---------------------------------------------------------------------------------------------

                                       4.5  C++ Break/Continue 
									
------------------------------------------------------------------------------------------------

- The break statement is seen in the switch statement, but is also 
  seen in loops.  
  
- The continue statement breaks 1-iteration (in the loop), if a 
   specified condition occurs, and continues with next iteration in 
   the loop.  
   
  
 */ 
 
 
 /* 
 
ex 1.) 
 
 
 for (int i = 0; i < 10; i ++){
	 
	 if (i ==4) {
		 
		 break; 
		 
	 } 
	 
	 cout << i << "\n"; 
	 
 }
 
 */ 
 
 
 /* 
 
 ex 2.)
 
 
 for (int i =0; i < 10; i++) {
	 
	 if (i ==4) {
		 
		 continue; 
		 
	 } 
	 
     cout << i << "\n";

// This basically skips the number 4. 	 
	 
 }
 
 */ 
 
 /*
 
 ex 3.)
 
 int i = 0; 
 
 while (i < 10) {
	 cout << i << "\n";
	 i ++; 
	 if (i ==4) {
		 break; 
	 }
 }
 
 */
 
 /* 
 
 ex 4.) 
 int i = 0;
 
 while (i < 10) {
	 if (i ==4) {
		 continue; 
	 }
	 cout << i << "\n";
	 i ++;
	
 }
 
 */ 
 
return 0; 

}