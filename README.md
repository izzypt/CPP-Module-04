# CPP-Module-04

### Subtype polymorphism, abstract classes, interfaces

----------------------------------------------------------------------------------------------


In C++, abstract classes and interfaces are both used to define common behaviors and create a blueprint for derived classes. 

They are similar in concept but differ in their implementation and purpose.

### Abstract Classes:

  - An abstract class is a class that cannot be instantiated directly.
  - It serves as a base class for other classes and provides a common interface for derived classes to inherit from.
  - An abstract class typically contains one or more pure virtual functions, which are declared using the syntax "= 0" at the end of the function declaration.
  - These pure virtual functions have no implementation in the abstract class and must be overridden by any derived class that inherits from the abstract class.

    Here's an example of an abstract class in C++:
    
    ```cpp
    class Shape {
    public:
        virtual double calculateArea() const = 0; // Pure virtual function
        virtual void print() const = 0; // Pure virtual function
    
        // Concrete member function
        void displayArea() const {
            std::cout << "Area: " << calculateArea() << std::endl;
        }
    };
    ```
    
    In this example, the `Shape` class is an abstract class that declares two pure virtual functions: `calculateArea()` and `print()`.
    
    Any derived class inheriting from `Shape` must provide implementations for these functions. The `displayArea()` function is a concrete member function that can be used by any derived class and calls the `calculateArea()` function.
    
    Abstract classes are useful when you want to define a common interface and provide some default behavior, while leaving certain methods to be implemented by the derived classes. They are often used to create hierarchies and define common characteristics for a group of related classes.

### Interfaces:

- In C++, interfaces are not explicitly defined as a language construct, unlike some other programming languages like Java. 

- However, the concept of an interface can be achieved by using abstract classes with pure virtual functions only, similar to the example above. An interface is essentially an abstract class with only pure virtual functions and no concrete member functions.

    Here's an example of an "interface" using an abstract class:
    
    ```cpp
    class Printable {
    public:
        virtual void print() const = 0; // Pure virtual function
    };
    ```
    
    In this example, the `Printable` class acts as an interface, providing a common behavior of being printable.

    Any class that wants to be printable can inherit from this interface and must provide an implementation for the `print()` function.
    
    Interfaces are useful when you want to define a contract or a set of methods that a class must implement, without providing any default behavior. By enforcing the implementation of specific functions, interfaces allow for polymorphism and loose coupling between different components of a system.
    
    It's important to note that in C++, a class can inherit from multiple interfaces or abstract classes, but it can only inherit from a single concrete (non-abstract) class.
