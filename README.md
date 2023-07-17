# CPP-Module-04

### Subtype polymorphism, abstract classes, interfaces

----------------------------------------------------------------------------------------------


In C++, abstract classes and interfaces are both used to define common behaviors and create a blueprint for derived classes. 

They are similar in concept but differ in their implementation and purpose.

# Abstract Classes:

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

# Interfaces:

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


# Override keyword

> The `override` keyword in C++ is used to explicitly indicate that a member function in a derived class is intended to override a virtual function from its base class.

It serves as a safety mechanism to ensure that the intended function overriding is indeed taking place and helps catch potential bugs during compilation.

When you mark a function with the `override` keyword, the compiler will check if the function is actually overriding a virtual function in the base class. 

> If the function does not match the signature of any virtual function in the base class, the compiler will generate an error. This helps prevent accidental mistakes, such as typos in function names or mismatched function signatures.

```cpp
class Base {
public:
    virtual void foo() const {
        std::cout << "Base::foo()\n";
    }
};

class Derived : public Base {
public:
    void foo() const override {
        std::cout << "Derived::foo()\n";
    }
};
```

  In this example, the `Base` class has a virtual function `foo()`. 
  
  The `Derived` class inherits from `Base` and overrides the `foo()` function using the `override` keyword.
  
  Now, if you accidentally make a mistake in the `Derived` class, such as misspelling the function name or using the wrong function signature, the compiler will catch it and issue an error. For example:

```cpp
class Derived : public Base {
public:
    void fooo() const override { // Incorrect function name
        std::cout << "Derived::foo()\n";
    }
};
```

With the `override` keyword, the compiler will raise an error like:

```
error: 'void Derived::fooo() const' marked 'override', but does not override
```

In summary, you should use the `override` keyword whenever you want to override a virtual function from the base class in a derived class. It's a good practice to explicitly specify your intent to override, which helps improve code readability and maintainability while catching potential errors early in the development process.
