# Definition
The Template Method Pattern defines the skeleton of an algorithm in a method, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm’s structure.

The UML Diagram of Template Method Pattern looks like following:
![UML Diagram of Template Method Pattern](/template-method-pattern/templatepattern.png)[^1]

# Diagram on e.g. coded here
![Beverage Maker](/template-method-pattern/tea-coffee.jpeg)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall beverage.cpp`

or

`g++ -c -Wall -std=c++11 beverage.cpp`

`g++ -std=c++11 -Wall beverage.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"