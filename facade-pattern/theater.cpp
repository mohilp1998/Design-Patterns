#include "include/theater.h"

HomeTheaterFacade::HomeTheaterFacade(TheaterLights *a, PopcornPopper *b, Projector *c)
{
  lights = a;
  popper = b;
  projector = c;
}

void HomeTheaterFacade::watchMovie(std::string name)
{
  // Dim the theater lights
  lights->dim();

  // Start Popcorn popper and pop popcorn
  popper->on();
  popper->pop();

  // Set movie in projector
  projector->on();
  projector->setMovie(name);
  projector->startMovie();

  std::cout << "\nEnjoy the Movie!!\n\n";
}

void HomeTheaterFacade::endMovie()
{
  // Remove movie from projector
  projector->removeMovie();
  projector->off();

  // Turn off popcorn
  popper->off();

  // Turn theater lights off
  lights->off();

  std::cout << "\nBye.\n\n";
}

int main()
{
  // components
  TheaterLights lights;
  PopcornPopper popper;
  Projector projector;

  // Home Theater
  HomeTheaterFacade homeTheater(&lights, &popper, &projector);

  // Testing
  lights.on();
  projector.off();
  std::cout << "\n";

  homeTheater.watchMovie("Deadpool & Wolverine");
  std::cout << "Watching (....)\n";
  std::cout << "Credits Roll\n\n";

  homeTheater.endMovie();
  return 0;
}