# Definition
The State Pattern allows an object to alter its behavior when it's internal state changes. The object will appear to change its class.

The UML Diagram of State Pattern looks like following:
![UML Diagram of State Pattern](/state-pattern/state-pattern.png)[^1]

# Diagram on e.g. coded here
![Gumball Pattern](/state-pattern/state.png)[^1]

# Compile the code using following ways
`g++ -std=c++11 -Wall state.cpp gumball.cpp`

or

`g++ -c -Wall -std=c++11 state.cpp gumball.cpp`

`g++ -std=c++11 -Wall state.o gumball.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"
