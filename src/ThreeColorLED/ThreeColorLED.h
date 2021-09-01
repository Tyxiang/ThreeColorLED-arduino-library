#include <Arduino.h>

class ThreeColorLED {
  public:
    ThreeColorLED(int r, int g, int b);
    bool flash;
    void flash_on();
    void flash_off();
    String color = "off";
    void green();
    void yellow();
    void orange();
    void red();
    void magenta();
    void cyan();
    void blue();
    void white();
    void off();
    void begin();
  private:
    int _r;
    int _g;
    int _b;
};
