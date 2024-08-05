# Definition
The Command Pattern encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.

The UML Diagram of Command Pattern looks like following:
![UML Diagram of Command Pattern](/command-pattern/cmdpattern.png)[^1]

# Diagram on e.g. coded here
![Remote Controller](/command-pattern/remotecontroller.jpeg)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall components.cpp commands.cpp remotecontroller.cpp`

or

`g++ -c -Wall -std=c++11 components.cpp commands.cpp remotecontroller.cpp`

`g++ -std=c++11 -Wall components.o commands.o remotecontroller.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"