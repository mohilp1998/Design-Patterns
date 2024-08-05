#include "include/remotecontroller.h"
#include <iostream>

RemoteController::RemoteController(Command * noCmd)
{
  buttons.resize(5, noCmd);
}

void RemoteController::setCommand(Command *obj, int position)
{
  if (position < 0 || position >= buttons.size())
    assertm(false, "Incorrect Button Position");
  
  buttons[position] = obj;
}

void RemoteController::buttonPushed(int position)
{
  if (position < 0 || position >= buttons.size())
    assertm(false, "Incorrect Button Position");
  
  buttons[position]->execute();
  undoButton = buttons[position];
}

void RemoteController::undoPushed()
{
  undoButton->undo();
}


int main()
{
  // Base Objects
  Light bedroomLight;
  CeilingFan bedroomFan;

  // Commands
  LightOnCommand lightsOn(&bedroomLight);
  LightOffCommand lightsOff(&bedroomLight);
  NoCommand noCmd;
  CeilingFanMed fanMidCmds(&bedroomFan);
  
  std::vector<Command *> cmdListMacro(2,nullptr);
  cmdListMacro[0] = &lightsOff;
  cmdListMacro[1] = &fanMidCmds;

  MacroCommand sleepTime(cmdListMacro);

  // Remote Controller
  RemoteController myRemote(&noCmd);
  myRemote.setCommand(&lightsOn, 0);
  myRemote.setCommand(&lightsOff, 1);
  myRemote.setCommand(&fanMidCmds, 2);
  myRemote.setCommand(&sleepTime, 3);

  // Testing Code
  myRemote.buttonPushed(1);
  std::cout << "\n";
  myRemote.buttonPushed(2);
  myRemote.undoPushed();
  std::cout << "\n";
  myRemote.buttonPushed(0);
  myRemote.undoPushed();
  std::cout << "\n";
  myRemote.buttonPushed(3);
  myRemote.undoPushed();
  std::cout << "\n";
  myRemote.buttonPushed(4);
  myRemote.undoPushed();

  return 0;
}