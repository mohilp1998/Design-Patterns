#include "include/components.h"

// TheaterLights
void TheaterLights::on()
{
  std::cout << "Lights Turned On.\n";
}

void TheaterLights::off()
{
  std::cout << "Lights Turned Off.\n";
}

void TheaterLights::dim()
{
  std::cout << "Dimming Lights Movie Time!\n";
}

// PopcornPopper
void PopcornPopper::on()
{
  std::cout << "Popcorn Popper turning on.\n";
}

void PopcornPopper::pop()
{
  std::cout << "Popcorn Popper popping!\n";
}

void PopcornPopper::off()
{
  std::cout << "Popcorm Popper switched off.\n";
}

// Projector
void Projector::on()
{
  std::cout << "Projector turned on.\n"; 
}

void Projector::off()
{
  std::cout << "Projector turned off.\n"; 
}

void Projector::startMovie()
{
  std::cout << "Starting the movie\n"; 
}

void Projector::removeMovie()
{
  std::cout << "Stopping and removing the movie\n"; 
}

void Projector::setMovie(std::string name)
{
  std::cout << "Setting Movie: '" << name << "'\n"; 
}