# Definition
The Adapter Pattern converts the interface of a class into another interface the clients expect. Adapter lets classes work together that couldn’t otherwise because of incompatible interfaces.

The UML Diagram of Adapter Pattern looks like following:

1. Using Composition
![UML Diagram of Adapter Pattern Composition](/adapter-pattern/adppattern1.png)[^1]

2. Using Inheritance
![UML Diagram of Adapter Pattern Inheritance](/adapter-pattern/adppattern2.png)[^1]

# Example coded here
Following 2 examples are coded here:

1. Using composition 
2. Using inheritance

Both of them are adapting a turkey to be used as duck class. The class diagram is as shown below.
![UML Diagram of Duck-Turkey Example](/adapter-pattern/duck_turkey.jpeg)[^1]

# Compile the code using following ways
To compile composition example:

`g++ -std=c++11 -Wall adpatercompose.cpp xyz.cpp abc.cpp`

To compile inheritance example:

`g++ -std=c++11 -Wall adpaterinherit.cpp xyz.cpp abc.cpp`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"