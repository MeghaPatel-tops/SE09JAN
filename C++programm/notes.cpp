What is a Class in C++?
A class is a user-defined data type, which holds its own data members and member functions,
 which can be accessed and used by creating an instance of that class. A C++ class is like a 
 blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different 
names and brands
 but all of them will share some common properties like all of them will have 4 wheels, Speed Limit,
  Mileage range, etc. So here, the Car is the class, and wheels, speed limits,
   and mileage are their properties.

A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used
 to manipulate these variables together, these data members and member functions
  define the properties and behaviour of the objects in a Class.
In the above example of class Car, the data member will be speed limit, mileage,
 etc, and member functions can be applying brakes, increasing speed, etc.
But we cannot use the class as it is. We first have to create an object of the
 class to use its features. An Object is an instance of a Class.

Note: When a class is defined, no memory is allocated but 
when it is instantiated (i.e. an object is created) memory is allocated.


Defining Class in C++
A class is defined in C++ using the keyword class followed 
by the name of the class. The following is the syntax:

class ClassName {
     access_specifier:
     data member;
     member function;
};

What is an Object in C++?
When a class is defined, only the specification for the object is defined; 
no memory or storage is allocated. To use the data and access
 functions defined in the class, you need to create objects.

Syntax to Create an Object
We can create an object of the given class in the 
same way we declare the variables of any other inbuilt data type.

ClassName ObjectName;

===========================Access Specifier=========================================
The public keyword is an access specifier.
 Access specifiers define how the members (attributes and methods) of a class can be accessed. 
 In the example above, 
 the members are public - which means that they can be accessed and modified from outside the code.

However, what if we want members to be private and hidden from the outside world?

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however,
 they can be accessed in inherited classes. You will learn more about Inheritance later.
