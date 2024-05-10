# Definition
The Abstract Factory Pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes.

UML Diagram for the factory pattern:
![Abstract Factory Pattern UML Diagram](/factory-pattern/abstract-factory/absfactpattern.png)[^1]

# Diagram on e.g. coded here
![Pizza Store in Abstract Factory Pattern](/factory-pattern/abstract-factory/pizzastore.jpeg)[^1]

# Compile the code using following ways
`g++ -Wall -std=c++11 test.cpp pizzaStore.cpp pizzaIngredients.cpp pizza.cpp`

or

`g++ -c -std=c++11 -Wall test.cpp pizzaStore.cpp pizzaIngredients.cpp pizza.cpp`

`g++ -std=c++11 -Wall test.o pizzaStore.o pizzaIngredients.o pizza.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"