#include "commands.h"

class RemoteController
{
  public:
    std::vector<Command *> buttons;
    Command *undoButton = nullptr;

    RemoteController(Command * noCmd);
    ~RemoteController() = default;

    void setCommand(Command *obj, int position);
    void buttonPushed(int position);
    void undoPushed();
};
