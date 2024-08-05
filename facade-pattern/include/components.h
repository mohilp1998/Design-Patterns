#include <iostream>
#include <string>

class TheaterLights
{
  public:
    void on();
    void off();
    void dim();
};

class PopcornPopper
{
  public:
    void on();
    void off();
    void pop();
};

class Projector
{
  public:
    void on();
    void off();
    void setMovie(std::string name);
    void startMovie();
    void removeMovie();
};