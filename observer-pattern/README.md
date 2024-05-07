# Definition
The Observer Pattern defines a one-to-many dependency between objects so that when one object changes state, all of its dependents are notified and updated automatically.

The UML Diagram of Observer Pattern looks like following:
![UML Diagram of Observer Patter](/observer-pattern/obspattern.png)[^1]

# Diagram on e.g. coded here
![Weather-O-Rama App](/observer-pattern/weatherorama.png)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall test.cpp display.cpp weatherdata.cpp`

or

`g++ -c -Wall -std=c++11 test.cpp display.cpp weatherdata.cpp`

`g++ -std=c++11 -Wall test.o display.o weatherdata.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"