#include <ThreeColorLED.h>

//共阳极LED，1为最亮，1023是熄灭，0什么都不是；
ThreeColorLED::ThreeColorLED(int r, int g, int b){ //, int b
  this->_r = r;
  this->_g = g;
  this->_b = b;
}

void ThreeColorLED::begin(){
  pinMode(_r, OUTPUT);
  pinMode(_g, OUTPUT);
  pinMode(_b, OUTPUT);
  off();
}

void ThreeColorLED::flash_on(){
  flash = true;
  analogWriteFreq(1);
}

void ThreeColorLED::flash_off(){
  flash = false;
  analogWriteFreq(1000);
}

void ThreeColorLED::green(){
  color = "green";
  analogWrite(_r, 1023);
  analogWrite(_g, 1021);
  analogWrite(_b, 1023);
}
void ThreeColorLED::yellow(){
  color = "yellow";
  analogWrite(_r, 1022);
  analogWrite(_g, 1018);
  analogWrite(_b, 1023);
}
void ThreeColorLED::orange(){
  color = "orange";
  analogWrite(_r, 1021);
  analogWrite(_g, 1021);
  analogWrite(_b, 1023);
}
void ThreeColorLED::red(){
  color = "red";
  analogWrite(_r, 1017);
  analogWrite(_g, 1023);
  analogWrite(_b, 1023);
}
void ThreeColorLED::magenta(){
  color = "magenta";
  analogWrite(_r, 1017);
  analogWrite(_g, 1023);
  analogWrite(_b, 1015);
}
void ThreeColorLED::cyan(){
  color = "cyan";
  analogWrite(_r, 1023);
  analogWrite(_g, 1012);
  analogWrite(_b, 1015);
}
void ThreeColorLED::blue(){
  color = "blue";
  analogWrite(_r, 1023);
  analogWrite(_g, 1023);
  analogWrite(_b,  900);
}
void ThreeColorLED::white(){
  color = "white";
  analogWrite(_r, 950);
  analogWrite(_g, 900);
  analogWrite(_b, 950);
}
void ThreeColorLED::off(){
  color = "off";
  analogWrite(_r, 1023);
  analogWrite(_g, 1023);
  analogWrite(_b, 1023);
}
