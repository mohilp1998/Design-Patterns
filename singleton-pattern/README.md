# Definition
The Singleton Pattern ensures a class has only one instance, and provides a global point of access to it.

The UML Diagram of Singleton Pattern looks like following:
![UML Diagram of Singleton Pattern](/singleton-pattern/singletonpattern.png)[^1]

# Example coded here
There are 2 examples coded here:
1. An implementation using locks. This can be easier to understand as it follows a simpler logic which is language agnostic.
2. An implementation which uses C++ language standard guarantees and thus utilizes the compiler to enable only single instance to exist.

# Compile the code using following ways
To compile simple example:

`g++ -Wall -std=c++11 genericSingleton.cpp`

To compile Cpp Specific Example:

`g++ -Wall -std=c++11 cppLangSingleton.cpp`

and run the generated executable `a.out`.


[^1]: Image take from "Head First Design Patterns, 2nd Edition by Eric Freeman and Elisabeth Robson"