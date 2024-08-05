#include "components.h"

class HomeTheaterFacade
{
  public:
    TheaterLights *lights;
    PopcornPopper *popper;
    Projector *projector;
  
  HomeTheaterFacade(TheaterLights *a, PopcornPopper *b, Projector *c);
  void watchMovie(std::string name);
  void endMovie();
};