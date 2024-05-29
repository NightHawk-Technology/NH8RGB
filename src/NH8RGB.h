#ifndef NH8RGB_h
#define NH8RGB_h

#include <NH8CHIR.h>
#include <Adafruit_NeoPixel.h>

class NH8RGB {
  public:
    NH8RGB(uint8_t chirAddr, uint8_t pixelPin);
    void begin();
    void setColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
    void fillColor(uint8_t r, uint8_t g, uint8_t b);
    void show();
    unsigned int readSensorData(unsigned char channel, bool mode); // Function to read data from the NH8CHIR sensor
  
  private:
    NH8CHIR chirSensor;
    Adafruit_NeoPixel strip;
};

#endif
