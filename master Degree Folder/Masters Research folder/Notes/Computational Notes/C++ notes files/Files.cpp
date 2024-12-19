# include <iostream> 
#include <cmath> 
#include  <fstream> 
#include <string> 
using namespace std; 


/*-----------------------------------------------------------------------------------------------------

                                            9.1 Files

-------------------------------------------------------------------------------------------------------

* The fstream library allows us to work with files.

* To use the fstream library, include both the standard 
  <iostream> AND the <fstream> header file:	

- ex.    #include <iostream> 
            #include <fstream> 
			
* There are three classes included in the 
  fstream library, which are used to create, write or read files:
  
 
  
 1. ofstream - Creates and writes to files. 
 
 2. ifstream - Reads from files 
 
 3. fstream - A combination of ofstream and ifstream: 
     creates, reads, and write to files. 
	 

                                           Create And Write to a File: 
										   
- To create a file, use either the ofstream or 
 fstream class, and specify the name of the file.
 
 - To write to the file, use the insertion operator ( <<) 
 
 */ 
 
 
 /* 
 
 ex 1.) 
 
 
 int main () {
	 // Create and open a text file 
	 ofstream MyFile("file_1.txt"); 
	 
	 // Write to the file
	 MyFile << "Files can be tricky, but it's fun enough!"; 
	 
	 // Close the file 
	 MyFile.close();
 }
 
 */ 
 
 /* -----------------------------------------------------------------------------------------------
 
                                          Read a File
										
-----------------------------------------------------------------------------------------------------
 
 
- To read from a file, use either the fstream or ifstream class, 
    and the name of the file.  
	
- Note that we also use a while loop together with the getline() 
  function (which belongs to the ifstream class) to read the file line
  by line, and to print the content of the file:
  
*/ 

/*

ex 2.)

int main () {

  // Create a text file
  ofstream MyWriteFile("filename.txt");

  // Write to the file
  MyWriteFile << "Files can be tricky, but it is fun enough!";
 
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
	// Arguments are object and class
    cout << myText;
  }

  // Close the file
  MyReadFile.close();


}

*/

/* ------------------------------------------------------------------------------------------------

                                                9.2 C++ Exceptions
												
---------------------------------------------------------------------------------------------------

- When executing C++ code, different errors can occur: coding 
  errors made by the programmer, errors due 
  to wrong input, or other unforeseeable things.
  

- When an error occurs, C++ will normally stop and 
  generate an error message. The technical term for this is: 
  C++ will throw an exception (throw an error).
  
 
                                        C++ try and Catch: 
										
- Exception handling in C++ consist of three keywords: try, throw and catch:

- The try statement allows you to define a block of code to be 
  tested for errors while it is being executed.
  
- The throw keyword throws an exception when a problem is detected, 
   which lets us create a custom error.
   
- The catch statement allows you to define a block of code to be executed 
   if an error occurs in the try block. 
   
- The try and catch keywords come in pairs. 

ex 3.) 

try {
	// Block of code to try 
	throw exception; // Throw an exception when a problem arise. 
}
catch () {
	// Block of code to handle errors
}


*/ 

 

/* 

ex 4.) 

int main () {

try { 
    int age = 24; 
    if (age >= 18) { 
	    cout << "Access granted - you are old enough."; 
	}else {
	   throw(age); 
	}
}

catch (int myNum) { 
        cout << "Access denied - You must be at least 18 yrs old. \n"; 
		cout << "Age is: " << myNum; 
}
return 0; 

}

*/ 

// You can also throw a specific keyword to output a refrence number, 
//  like a custom error number/code for organizing purposes. 


/* 

int main () {

try {
	int age = 15; 
	if (age >=18){
		cout << "Access granted - you are old enough."; 
	}else {
		throw 505; 
	}
}

catch (int myNum) {
	cout << "Access denied - You must be at least 18 years old. \n"; 
	cout << "Error number: " << myNum; 
}

return 0; 

} 

// This section is mainly used for debugging purposes. 

*/ 

int main () {
	cout << max(5,10); 
     return 0; 
}







