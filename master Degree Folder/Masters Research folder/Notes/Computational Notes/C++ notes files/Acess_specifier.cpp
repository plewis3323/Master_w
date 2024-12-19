#include <iostream> 
#include <string> 
#include <cmath> 
using namespace std; 

/* ----------------------------------------------------------------------------------------


                                  8.1 C++ Access Specifiers 
										 
										 
-------------------------------------------------------------------------------------------------

 - ex.) as shown earlier: 
 
 class Myclass {   // The class 
        public:    //Access Specifier 
		// class members goes here 
 }; 
 
 
 - The public keyword is an access specifier. 
    Access specifiers define how the members, 
	of a class are accessed.  
	
* In C++: 

- Public- members are accessible from outside the class. 

- Private- members cannot be accessed or viewed outside the class. 

-Protected- Members cannot be accessed from outside the class, however
                   they can be accessed in inherited classes. 
				   
				   
- ex. 

// By default all members of a class are private.  

class MyClass {
	int x;   // Private attribute 
	int y;   // Private attribute 
	
};
*/

/* 

ex1.) 

class MyClass {
	public: 
	   int x; 
	private: 
	    int y; 
}; 

int main() {
	MyClass myObj; 
	myObj.x = 25; 
	myObj.y = 50; 
	return 0; 
	
// This is an example of not being able to access private member.  

*/ 

/* ------------------------------------------------------------------------------------------------

                                            8.2 C++ Encapsulation 
											

-----------------------------------------------------------------------------------------------------


- The meaning of Encapsulation, is to make sure that 
 "sensitive" data is hidden from users. To achieve this, 
  you must declare class variables/attributes as private 
  (cannot be accessed from outside the class). 
  If you want others to read or modify the value 
  of a private member, you can provide public get and set methods.
  
 
                                           Access  Private  Members: 

- To access a private attribute, use public "get and "set" methods. 

*/ 


/* 

ex 2.)

class Employee {
	private: 
	// Private attribute 
	int salary; 
	
	public: 
	// setter 
	void setSalary(int s) {
		salary = s; 
	}
	
	// Getter 
	int  getSalary()  {
		return salary; 
	}
	
}; 


int main() {
	Employee myObj; 
	myObj.setSalary(50000); 
	cout << myObj.getSalary(); 
	return 0; 
}


*****  (This is an example Enscapulation) 

*/ 


/* --------------------------------------------------------------------------------------------------


                                             8.3  C++  Inheritance 
											 
-----------------------------------------------------------------------------------------------------



- In C++, it is possible to inherit attributes and methods from one class 
  to another.  We group the "inheritance concept" into two categories: 
  
  * derived class (child) - the class that inherits from the another class. 
  * base class (parent) - the class being inherited from.

*/ 



/* 

ex 3.) 

// Base class 

class Vehicle { 
      public: 
          string brand = "Ford"; 
           void honk() { 
               cout << "Tuut, tuut!  \n"; 
		   }
}; 

// Derived class 

class Car:  public Vehicle {
              public: 
                    string model = "Mustang"; 
}; 


int main() { 
   Car  myCar; 
   myCar.honk(); 
   cout << myCar.brand + "  " + myCar.model; 
   return 0; 
} 

*/ 


/* -------------------------------------------------------------------------------------------------
        
		                                    8.3.1  Multilevel Inheritance 
											
-----------------------------------------------------------------------------------------------------


- A class can also 
be derived from one class, 
which is already derived from another class.

- In the following example, MyGrandChild 
  is derived from class MyChild
  (which is derived from MyClass).
  
  
  */ 
  
  
 /*
 
 ex 4.) 
 
 // Base class (parent) 
 
 class MyClass { 
       public: 
	       void myFunction() { 
		       cout << "Some content in parent class. "; 
		   }
 }; 
 
 // Derived class (child) 
 class MyChild: public MyClass {
 }; 
 
 // Derived class (grandChild) 
 class MyGrandChild: public MyChild { 
 }; 
 
 int main() {
	 MyGrandChild myObj; 
	 myObj.myFunction(); 
	 return 0; 
	 
 }
 
 */ 
 
 /* ------------------------------------------------------------------------------------------------
 
 
                                           8.3.2 Multiple Inheritance

-----------------------------------------------------------------------------------------------------

 - 	A class can also 
    be derived from more than 
	one base class, using a comma-separated list:			

*/ 


/* 

ex 5.)

// Base class 
class MyClass { 
     public: 
          void myFunction() { 
                 cout << "Some content in parent class." ; 
		  }
}; 


//Another base class 
class MyOtherClass {
	    public: 
		    void myOtherFunction() {
			     cout << "Some content in another class."; 
			}
}; 


// Derived class 

class MyChildClass: public MyClass, public MyOtherClass { 
}; 


int main() {
	MyChildClass myObj; 
	myObj.myFunction(); 
	myObj.myOtherFunction(); 
	return 0; 
	
}


*/ 



/* -----------------------------------------------------------------------------------------------

                                              8.3.3   Access Specifiers 
											  
----------------------------------------------------------------------------------------------------


- You learned from the 
  Access Specifiers chapter that there are three specifiers available in
  C++. Until now, we have only used public (members of a class are 
  accessible from outside the class) and private 
  (members can only be accessed within the class). 
  The third specifier, protected, 
  is similar to private, but it can also be accessed in the inherited class:

		  
												
 */ 
 
 /*
 
 ex 6.)
 
 // Base Class 
 
 class Employee { 
       protected:  // protected access specifier 
	        int salary; 
			
 }; 
 
 
 // Derived class 
 
 class Programmer: public Employee { 
        public: 
		    int bonus; 
			void setSalary(int s) { 
			    salary = s; 
			}
			int getSalary() {
				return salary; 
			}
 }; 
 
 int main() {
	 Programmer myObj; 
	 myObj.setSalary(5000); 
	 myObj.bonus = 15000; 
	 cout << "Salary:  " << myObj.getSalary() << " \n"; 
	 cout << "Bonus: " << myObj.bonus << " \n"; 
	 return 0; 
 }
 
 
*/ 

/*------------------------------------------------------------------------------------------------

                                          8.4  C++  Polymorphism 

---------------------------------------------------------------------------------------------------

- Polymorphism means "many forms", and it occurs 
  when we have many classes that are related to each other by inheritance.	

 - Like we specified in the previous chapter; 
   Inheritance lets us inherit attributes and methods 
   from another class. Polymorphism uses those 
   methods to perform different tasks. This allows us to 
   perform a single action in different ways.
   
 */ 
 
 
 // Base class 
 
 class Animal {
	 public: 
	    void animalSound() {
			  cout << "The animal makes a sound \n"; 
		}
 }; 
 
 // Derived class 
 
 class Pig : public Animal {
	 public: 
	    void animalSound() {
		cout << "The pig says: wee wee  \n"; 
		}
 };
 

// Derived class 

class Dog : public Animal {
	public: 
	   void animalSound() {
		   cout << "The dog says:  bow wow \n"; 
	   }
}; 

int main() {
	Animal myAnimal; 
	Pig myPig; 
	Dog myDog; 
	
	myAnimal.animalSound(); 
	myPig.animalSound(); 
	myDog.animalSound(); 
	return 0; 
}


 
 
 
 
 




					
  
  


