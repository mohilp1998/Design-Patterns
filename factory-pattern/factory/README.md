# Definition
The Factory Pattern defines an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to the subclasses.

UML Diagram for the factory pattern:
![Factory Pattern UML Diagram](/factory-pattern/factory/factorypattern.png)[^1]

# Diagram on e.g. coded here
![Pizza Store in Factory Patter](/factory-pattern/factory/pizzastore.png)[^1]

# Compile the code using following ways
<!-- `g++ -std=c++11 -Wall test.cpp duck.cpp flyBehavior.cpp quackBehavior.cpp` -->

or

<!-- `g++ -c -std=c++11 -Wall test.cpp duck.cpp flyBehavior.cpp quackBehavior.cpp` -->

<!-- `g++ -std=c++11 -Wall test.o duck.o flyBehavior.o quackBehavior.o` -->

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"