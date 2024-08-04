# Definition
The Facade Pattern provides a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.

The UML Diagram of Facade Pattern looks like following:
![UML Diagram of Facade Pattern](/facade-pattern/facadepattern.png)[^1]

# Diagram on e.g. coded here
![Home Theater](/facade-pattern/hometheater.jpeg)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall theatertest.cpp xyz.cpp abc.cpp`

or

`g++ -c -Wall -std=c++11 theatertest.cpp xyz.cpp abc.cpp`

`g++ -std=c++11 -Wall theatertest.o xyz.o abc.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"