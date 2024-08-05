class Light
{
  public:
    void turnOn();
    void turnOff();
};

enum SPEED {
  OFF = 0,
  LOW,
  MEDIUM,
  HIGH
};

class CeilingFan
{
  public:
    SPEED currSpeed = OFF;

    void off();
    void lowSpeed();
    void medSpeed();
    void highSpeed();

    SPEED getCurrentSpeed();
};