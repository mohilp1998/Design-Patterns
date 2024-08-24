# Definition
The Iterator Pattern provides a way to access the elements of an aggregate object sequentially without exposing it's underlying representation.

The UML Diagram of Iterator Pattern looks like following:
![UML Diagram of Iterator Pattern](/iterator-pattern/iterator-pattern.png)[^1]

# Diagram on e.g. coded here
![Menu Pattern](/iterator-pattern/iterator.png)[^1]

# Compile the code using following ways
`g++ -Wall -std=c++11 iterator.cpp menu.cpp waitress.cpp`

or

`g++ -c -Wall -std=c++11 iterator.cpp menu.cpp waitress.cpp`

`g++ -std=c++11 -Wall iterator.o menu.o waitress.o`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"
