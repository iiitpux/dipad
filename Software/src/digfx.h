#include <Arduino.h>
#include <Arduino_GFX_Library.h>

class DiGfx
{
public:
  DiGfx();
  void setup();
  void drawRect(int16_t x, int16_t y, int16_t w, int16_t h,
                           uint16_t color);

protected:

private:
};

