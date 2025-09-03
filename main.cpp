
        // Kamoliddin Mirzoyev 230049

        //Wednesday 9:00


/*     1.1

#include <iostream>



int main(int argc, char* argv[]) {
    std::cout << "Number of arguments received: " << argc << std::endl;

    for (int i = 0; i < argc; ++i) {
        // argv[0] is always the name of the program itself
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }

    // A return value of 0 typically indicates successful execution
    return 0;
}

*/


/*      1.2 main function shows the entry point for program to start. 
* In java main function is static, because it is called without creating an instance of the class,
so you don't have to create an object of the class to call the main method.
*       1.3 
    In C++ return type int (0 = success, non-zero = failure). 
    In java void (no return value; use System.exit(code) if you need to report a status).

    Parameters:
      In C++: int argc, char* argv[] (command-line arguments). 2 portable forms
      In Java: String[] args (command-line arguments). Exactly one form.
    
    Access modifiers:
      In C++: No access modifier (main is not a member of a class).
      In Java: public static.

    Return value from the ‘main‘:
        In C++: Returns an integer status code to the operating system. 0 is success, non-zero is an error.
        In Java: Does not return a value, System.exit(nonZeroValue) is called.



*/


/*      2.1
    #include <iostream>

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Swapping using arithmetic operations
    a = a + b; // a becomes 30
    b = a - b; // b becomes 10
    a = a - b; // a becomes 20

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}


    2.2 Primitive Types vs Reference Types

Primitive types store actual values directly in memory (typically on the stack).

Reference types store a memory address (reference) to the actual data, which is stored on the heap.

    2.3 Variable Scope

Scope defines where a variable can be accessed.

Local scope means the variable is only accessible within a function or block.

Class-level scope means the variable is accessible throughout the class.

Static scope means the variable belongs to the class, not instances, and is shared.

    2.4 Static vs Dynamic Typing

Static typing checks variable types at compile-time; types must be declared and don’t change.

Dynamic typing checks types at runtime; variables can change type during execution.

*/  

/*      3.1
    #include <iostream>

    int main() {
        int n1 = 0, n2 = 1, nextTerm = 0;

        std::cout << "First 10 Fibonacci numbers: ";

        for (int i = 1; i <= 10; ++i) {
            if (i == 1) {
                std::cout << n1 << " ";
                continue;
            }
            if (i == 2) {
                std::cout << n2 << " ";
                continue;
            }
            nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
            std::cout << nextTerm << " ";
        }

        std::cout << std::endl;
        return 0;
    }


    3.1 Question:

    Explain the difference between a ‘while’ loop and a ‘do-while’ loop. Why might one be chosen over the other?

    A while loop checks the condition before executing the loop body. If the condition is false initially,
     the loop body may not run at all.

    A do-while loop checks the condition after executing the loop body, so the body runs at least once.

    Use do-while when you need the loop to execute at least once, regardless of the condition.

    3.2 Question:

    What is a ‘switch’ statement? Discuss the role of ‘case’, ‘break’, and ‘default’ labels within a switch block.

    A switch statement allows multi-way branching based on the value of a variable.

    case labels define blocks of code to execute for specific values.

    break prevents fall-through to the next case and exits the switch.

    default is an optional block that runs if none of the case values match.

    3.3 Question:

    Describe ‘short-circuit evaluation’ for logical AND (&&) and logical OR (||) operators. 
    Provide an example where this behavior is useful.

    Short-circuit evaluation means:

    In A && B, if A is false, B is not evaluated.

    In A || B, if A is true, B is not evaluated.

    This is useful when B is an expensive or risky operation (e.g., a function call that should only run if necessary).
*/

/*      
    

*/


/* Functions / Methods
1. Palindrome Function

Question: Write a function isPalindrome that checks whether a string reads the same forwards and backwards.
Answer (C++):

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    // Compare the first half with the reversed second half
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main() {
    std::cout << "madam is palindrome? " 
              << (isPalindrome("madam") ? "true" : "false") << std::endl;
    std::cout << "hello is palindrome? " 
              << (isPalindrome("hello") ? "true" : "false") << std::endl;
    return 0;
}

2. Argument Passing in C++ vs Java

C++:

Pass-by-value: A copy of the argument is passed; changes don’t affect the original.

Pass-by-pointer: The memory address is passed; the function can modify the original.

Pass-by-reference: Direct alias of the original variable; avoids copying and allows modification.

Java:

Always pass-by-value. For primitives, the value is copied. For objects, the reference itself is copied, meaning the object can be modified but the reference cannot be redirected to a new object.

3. Function Overloading

Definition: Multiple functions with the same name but different parameter lists.

C++ & Java: The parameter type, number, or order must differ. The return type alone is not enough for valid overloading.

4. Recursion

Definition: A function that calls itself to solve a problem by breaking it into smaller subproblems.

Base Case: A stopping condition that prevents infinite recursion. Without it, the program would run indefinitely and crash.

Comments
1. Comment Types in C++
#include <iostream>

/**
 * @brief Documentation comment (Doxygen style).
 * Explains what a function or class does.
 
int main() {
    // Single-line comment
    int x = 5; // Comment about a specific line

    
     Multi-line comment
     Used for longer explanations.
    
    std::cout << "Comments provide context." << std::endl;
    return 0;
}

2. Importance of Comments

Improve code readability and maintainability.

Help teammates understand logic quickly.

Reduce onboarding time for new developers.

3. Documentation Tools

Java: Javadoc generates structured API documentation.

C++: Doxygen generates detailed docs from code comments.

4. "Good Code is Self-Documenting"

Clear naming and structure reduce the need for excessive comments.

Still, comments are useful for explaining complex algorithms, business logic, or design decisions.

Classes
1. BankAccount Class (C++)
#include <iostream>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.50);
    std::cout << "Initial balance: " << myAccount.getBalance() << std::endl;
    myAccount.deposit(50.25);
    std::cout << "Balance after deposit: " << myAccount.getBalance() << std::endl;
    return 0;
}

2. Class vs Object

Class: A blueprint describing properties and behaviors.

Object: A specific instance created from a class.

3. Access Specifiers

public: Accessible from anywhere.

private: Accessible only inside the class.

protected: Accessible inside the class and derived classes.

4. Constructors

Constructor: Special function for object initialization.

Default constructor: Automatically provided if no constructor is defined. It initializes members to default values.

Enums
1. Scoped Enum Example
#include <iostream>
#include <string>

enum class Season { SPRING, SUMMER, AUTUMN, WINTER };

std::string recommendActivity(Season s) {
    switch (s) {
        case Season::SPRING: return "Plant flowers";
        case Season::SUMMER: return "Go to the beach";
        case Season::AUTUMN: return "Rake leaves";
        case Season::WINTER: return "Build a snowman";
        default: return "Rest";
    }
}

int main() {
    Season now = Season::AUTUMN;
    std::cout << "It’s autumn! Let’s: " << recommendActivity(now) << std::endl;
    return 0;
}

2. Advantages of Enums

More readable than integers or strings.

Provide type safety and prevent invalid values.

3. Enums and Self-Documentation

Make code more descriptive.

Explicitly define valid options.

4. Java vs C++ Enums

C++ scoped enums: Strongly typed but simple.

Java enums: Can have fields, methods, and constructors, making them more powerful.

Inheritance
1. Vehicle / Car Example
#include <iostream>

class Vehicle {
public:
    void startEngine() {
        std::cout << "Engine has started." << std::endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        std::cout << "The car is moving." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); // From Vehicle
    myCar.drive();       // From Car
    return 0;
}

2. "Is-a" vs "Has-a"

Is-a (Inheritance): A Car is a Vehicle.

Has-a (Composition): A Car has an Engine.

3. Method Overriding

Redefining a base class method in a subclass.

C++: Use virtual/override.

Java: Use @Override.

4. Diamond Problem

Occurs in multiple inheritance when a class inherits from two classes with the same ancestor.

C++: Solved with virtual inheritance.

Java: Avoided by disallowing multiple inheritance of classes (uses interfaces instead).

Mixins & Interfaces
1. Printable Mixin Example
#include <iostream>
#include <string>

class IStringable {
public:
    virtual std::string toString() const = 0;
    virtual ~IStringable() = default;
};

class Printable {
public:
    void print(const IStringable &obj) {
        std::cout << obj.toString() << std::endl;
    }
};

class Book : public IStringable {
private:
    std::string title, author;
public:
    Book(std::string t, std::string a) : title(t), author(a) {}
    std::string toString() const override {
        return "'" + title + "' by " + author;
    }
};

int main() {
    Book myBook("The Hobbit", "J.R.R. Tolkien");
    Printable p;
    p.print(myBook);
    return 0;
}

2. Purpose of Mixins / Interfaces

Encourage code reuse.

Add functionality without enforcing strict inheritance hierarchies.

3. Java Default Methods

Interfaces can provide default implementations.

Helps achieve mixin-like behavior without multiple inheritance.

4. Trade-offs

Inheritance: Simple but rigid.

Composition: Flexible, avoids tight coupling.

Mixins: Promote reuse but can complicate class design.

Polymorphism
1. Runtime Polymorphism Example
#include <iostream>
#include <vector>
#include <memory>

class Shape {
public:
    virtual double getArea() const = 0;
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double getArea() const override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double getArea() const override { return 3.14159 * r * r; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(10, 5));
    shapes.push_back(std::make_unique<Circle>(3));

    for (const auto &shape : shapes) {
        std::cout << "Area: " << shape->getArea() << std::endl;
    }
    return 0;
}

2. Compile-time vs Runtime Polymorphism

Compile-time: Method overloading, operator overloading.

Runtime: Achieved through virtual functions and overriding.

3. Abstract Class vs Interface

Abstract class (C++/Java): Can have both abstract and concrete methods.

Interface (Java): Purely defines contracts. Equivalent to fully abstract class in C++.

4. Achieving Polymorphism

Java: Interfaces + method overriding.

C++: Abstract classes + virtual functions.

Async Operations
1. Async Sum Example
#include <iostream>
#include <future>

long long calculateSum() {
    long long sum = 0;
    for (long long i = 1; i <= 1000000000; ++i) sum += i;
    return sum;
}

int main() {
    std::cout << "Main thread: Starting calculation..." << std::endl;
    std::future<long long> sumFuture = std::async(std::launch::async, calculateSum);
    std::cout << "Main thread: Waiting for result..." << std::endl;
    long long result = sumFuture.get();
    std::cout << "Main thread: The calculated sum is: " << result << std::endl;
    return 0;
}

2. Purpose of Async

Avoid blocking the main thread during long tasks (e.g., file I/O, network requests).

3. Parallel vs Concurrent

Parallel: Tasks execute at the same time.

Concurrent: Tasks interleave execution but not necessarily simultaneously.

4. Futures & Promises

Future: Represents a result that will be available later.

Promise: The producer side that sets the value.

Java → Future, CompletableFuture.

C++ → std::future, std::promise.

Exceptions
1. Exception Handling Example
#include <iostream>
#include <stdexcept>

void processAge(int age) {
    if (age < 0) throw std::invalid_argument("Age cannot be negative.");
    std::cout << "Age processed successfully: " << age << std::endl;
}

int main() {
    int userAge = -5;
    try {
        std::cout << "Processing age: " << userAge << std::endl;
        processAge(userAge);
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        std::cout << "Program continues." << std::endl;
    }
    return 0;
}

2. Try-Catch-Finally

try: Wraps risky code.

catch: Handles exceptions.

finally (Java): Always executes cleanup.

C++ equivalent: RAII pattern (resources released automatically when objects go out of scope).

3. Checked vs Unchecked

Java:

Checked: Must be declared or handled (e.g., IOException).

Unchecked: Runtime errors (NullPointerException).

C++: Does not distinguish between checked and unchecked.

4. Pros & Cons of Exceptions

Advantages: Cleaner error handling, separates logic from error control, propagates errors automatically.

Disadvantages: Overuse can hurt performance, may obscure control flow, require disciplined handling.

*/