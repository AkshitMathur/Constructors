# Constructors
Experiment_12

## Contents
- [Aim](#aim)
- [Software Used](#software-used)
- [Theory](#theory)
  * [Definition](#Definition)
  * [Properties](#Properties-of-Constructors)
  * [Advantages](#Advantages-of-Constructors)
  * [Types](#Types-of-Constructors)
- [Algorithms](#algorithms)
- [Conclusion](#conclusion)

## Aim: 
To Study and Implement Constructors and Deconstructors

## Software Used:
VS Code , Dev C++

## Theory:
### Constructors Defination:
Constructor in C++ is a special method that is invoked automatically at the time an object of a class is created. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs the values i.e. provides data for the object which is why it is known as a constructor.

## Syntax of Constructors in C++
The prototype of the constructor looks like this:
<class-name> (){
...
}
### Properties of Constructors:
 - The name of the constructor is the same as its class name.
 - Constructors are mostly declared in the public section of the class though they can be declared in the private section of the class.
 - Constructors do not return values; hence they do not have a return type.
 - A constructor gets called automatically when we create the object of the class.
 - You can overload constructors in a class, meaning you can have multiple constructors with different parameter lists.
 - If no constructor is explicitly defined, the compiler provides a default constructor that initializes data members to default values.
 - A special constructor that initializes an object using another object of the same class. It is often used for deep copying.
 - Constructors can take parameters to initialize objects with specific values.

### Advantages of Constructors:
  - Automatic Initialization: Constructors ensure that an object is initialized to a valid state when it is created. This reduces the chances of encountering uninitialized data.
  - Encapsulation of Initialization Logic: They encapsulate the logic required to set up an object, making the code cleaner and more maintainable.
  - Support for Overloading: By allowing multiple constructors with different parameter lists, constructors provide flexibility in object creation.
  - Initialization of Complex Objects: Constructors can be used to initialize complex objects, including those involving dynamic memory allocation.
  - Consistency: Using constructors helps maintain consistency in object initialization. It ensures that every object of a class starts life in a well-defined state.
  - Resource Management: Constructors can handle resource allocation, such as memory or file handles, ensuring that resources are properly allocated when an object is created.
  - Compatibility with Class Hierarchies: Constructors support initialization in class hierarchies. Base class constructors are called before derived class constructors, allowing for proper setup of inherited 
    properties.
  - Avoiding Redundant Code: They help avoid redundant initialization code by centralizing it in the constructor rather than spreading initialization code across various parts of the program.
 
## Types of Constructors:
## 1. Default Constructor
A default constructor is a constructor that doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.
## Syntax of Default Constructor

className() {
    // body_of_constructor
}
The compiler automatically creates an implicit default constructor if the programmer does not define one.

## 2. Parameterized Constructor
Parameterized constructors make it possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object.
## Syntax of Parameterized Constructor

className (parameters...) {
      // body
}
If we want to initialize the data members, we can also use the initializer list as shown:

MyClass::MyClass(int val) : memberVar(val) {};

## 3. Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.
## Syntax of Copy Constructor

Copy constructor takes a reference to an object of the same class as an argument.

ClassName (ClassName &obj)
{
  // body_containing_logic
}

Just like the default constructor, the C++ compiler also provides an implicit copy constructor if the explicit copy constructor definition is not present.

Here, it is to be noted that, unlike the default constructor where the presence of any type of explicit constructor results in the deletion of the implicit default constructor, the implicit copy constructor will always be created by the compiler if there is no explicit copy constructor or explicit move constructor is present.

## 1. Defining the Constructor Within the Class
<class-name> (list-of-parameters) {
     // constructor definition
}
## 2. Defining the Constructor Outside the Class
<class-name> {

    // Declaring the constructor
    // Definiton will be provided outside
    <class-name>();

    // Defining remaining class
}

<class-name>: :<class-name>(list-of-parameters) {
      // constructor definition 
}

## Algorithm for Date Class Program
 1. **Start**
 2. Define date Class
    - int d (Day)
    - int m (Month)
    - int y (Year)
    - Define public members:
3. Constructor date()
    - Output: "Constructor called"
    - Initialize d to 4
    - Initialize m to 9
    - Initialize y to 2024
4. Method display()
 - Output: "Today's date is: d/m/y" where d, m, and y are the values of day, month, and year.
Main Function (main())
5. Create an object mydate of class date
 - The constructor date() is automatically called.
6. Call mydate.display()
 - This displays the date initialized in the constructor.
7. **End**

## Constructors ouside class
1. **Start**
2. Define Student Class
    - Declare private members:
    - int rno (Roll number)
    - char name[50] (Name)
    - double fee (Fee)
    - Define public members:
3.Constructor Student()
  - Prompt the user to enter rno, name, and fee.
  - Read the values from user input.
4. Method display()
  - Print the rno, name, and fee.
Main Function (main())
5. Create an object s of class Student
 - The constructor Student() is called automatically.
 - The constructor prompts the user for input and initializes the object with these values.
6. Call s.display()
 - This method displays the values of rno, name, and fee that were initialized by the constructor.
7. **End**

## Parameterized Constructor:
1. **Start**
2. Define Construct Class
    - Declare private members:
    - int a (An integer variable)
    - int b (Another integer variable)
    - Define public members:
3. Constructor Construct(int m, int n)
    - Initialize a with the value m.
    - Initialize b with the value n.
4. Method display()
    - Print the values of a and b.
Main Function (main())

5. Create an object myconstruct of class Construct with arguments 10 and 20
    - The constructor Construct(int m, int n) is called with m = 10 and n = 20.
    - This initializes a to 10 and b to 20.
6. Call myconstruct.display()
    - This method prints the values of a and b.
7. **End**

## Conclusion
We learnt to use the concepts of Class and Objects.
