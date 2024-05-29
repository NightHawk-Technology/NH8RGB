#include "NH8RGB.h"

NH8RGB::NH8RGB(uint8_t chirAddr, uint8_t pixelPin) :
  chirSensor(chirAddr), strip(8, pixelPin, NEO_GRB + NEO_KHZ800) {
}

void NH8RGB::begin() {
  chirSensor.init();
  strip.begin();
}

void NH8RGB::setColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b) {
  strip.setPixelColor(n, r, g, b);
}

void NH8RGB::fillColor(uint8_t r, uint8_t g, uint8_t b) {
  for(int i = 0; i < 8; i++) {
    strip.setPixelColor(i, r, g, b);
  }
  strip.show();
}

void NH8RGB::show() {
  strip.show();
}

unsigned int NH8RGB::readSensorData(unsigned char channel, bool mode) {
  return chirSensor.read(channel, mode);
}
