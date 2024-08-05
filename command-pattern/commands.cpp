#include "include/commands.h"
#include<iostream>

LightOnCommand::LightOnCommand(Light *obj)
{
  objectLight = obj;
}

void LightOnCommand::execute()
{
  objectLight->turnOn();
}

void LightOnCommand::undo()
{
  objectLight->turnOff();
}

LightOffCommand::LightOffCommand(Light *obj)
{
  objectLight = obj;
}

void LightOffCommand::execute()
{
  objectLight->turnOff();
}

void LightOffCommand::undo()
{
  objectLight->turnOn();
}

void NoCommand::execute()
{
  std::cout << "No Command set!\n";
}

void NoCommand::undo()
{
  std::cout << "No Command set!\n";
}

CeilingFanMed::CeilingFanMed(CeilingFan *obj)
{
  objectFan = obj;
  lastSpeed = objectFan->getCurrentSpeed();
}

void CeilingFanMed::execute()
{
  lastSpeed = objectFan->getCurrentSpeed();
  objectFan->medSpeed();
}

void CeilingFanMed::undo()
{
  if (lastSpeed == OFF)
    objectFan->off();
  else if (lastSpeed == LOW)
    objectFan->lowSpeed();
  else if (lastSpeed == MEDIUM)
    objectFan->medSpeed();
  else if (lastSpeed == HIGH)
    objectFan->highSpeed();
  else
    assertm(false, "Unknown Fan Speed");
}

MacroCommand::MacroCommand(std::vector<Command *> cmds)
{
  allCmds.clear();
  for (int i=0; i<cmds.size(); i++)
  {
    allCmds.push_back(cmds[i]);
  }
}

void MacroCommand::execute()
{
  for (int i=0; i<allCmds.size(); i++)
  {
    allCmds[i]->execute();
  }
}

void MacroCommand::undo()
{
  for(int i=allCmds.size()-1; i >= 0; i--)
  {
    allCmds[i]->undo();
  }
}