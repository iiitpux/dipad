#include "digfx.h"

Arduino_DataBus *bus = create_default_Arduino_DataBus();

/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */
//Arduino_GFX *gfx = new Arduino_ILI9341(bus, DF_GFX_RST, 0 /* rotation */, false /* IPS */);
Arduino_GFX *gfx = new Arduino_GC9A01(bus, 33 /* RST */, 0 /* rotation */, true /* IPS */);

DiGfx::DiGfx()
{}

void DiGfx::setup()
{
    gfx->begin();
    gfx->fillScreen(BLACK);
}

void DiGfx::drawRect(int16_t x, int16_t y, int16_t w, int16_t h,
                           uint16_t color)
{
  gfx->drawRect(40,40,40,40,random(0xffff));
}