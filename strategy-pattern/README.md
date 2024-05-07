# Definition
Strategy Pattern defines a family of algorithms, encapsulates each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

# Diagram on e.g. coded here
![DuckUSim UML Diagram for Design Pattern](/strategy-pattern/duckusim.png)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall test.cpp duck.cpp flyBehavior.cpp quackBehavior.cpp`

or

`g++ -c -std=c++11 -Wall test.cpp duck.cpp flyBehavior.cpp quackBehavior.cpp`

`g++ -std=c++11 -Wall test.o duck.o flyBehavior.o quackBehavior.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"