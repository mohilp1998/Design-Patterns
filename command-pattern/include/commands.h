#pragma once
#include "components.h"
#include<vector>

#include <cassert>

// Use (void) to silence unused warnings.
#define assertm(exp, msg) assert(((void)msg, exp))

// command interface
class Command
{
  public:
    // Default destructor
    virtual ~Command() = default;

    // Note need to set = 0 here, else will need to implement
    // the code for these also. Without = 0 cpp will try to find
    // the function implementation and not assume it as abstract class.
    virtual void execute() = 0;
    virtual void undo() = 0;
};

// Commands
class LightOnCommand: public Command
{
  public:
    Light *objectLight;

    LightOnCommand(Light *obj);
    void execute();
    void undo();
};

class LightOffCommand: public Command
{
  public:
    Light *objectLight;

    LightOffCommand(Light *obj);
    void execute();
    void undo();
};

class NoCommand: public Command
{
  public:
    void execute();
    void undo();
};


class CeilingFanMed: public Command
{
  public:
    CeilingFan *objectFan;
    SPEED lastSpeed;

    CeilingFanMed(CeilingFan *obj);
    void execute();
    void undo();
};

class MacroCommand: public Command
{
  public:
    std::vector<Command *> allCmds;

    MacroCommand(std::vector<Command *> cmds);

    void execute();
    void undo();
};