#include <DiGfx.h>

DiGfx *digfx = new DiGfx();

void setup(void)
{
    digfx->setup();

    digfx->drawRect(40,40,40,40,random(0xffff));

    delay(5000); // 5 seconds
}

void loop()
{
    // gfx->setCursor(random(gfx->width()), random(gfx->height()));
    // gfx->setTextColor(random(0xffff), random(0xffff));
    // gfx->setTextSize(random(6) /* x scale */, random(6) /* y scale */, random(2) /* pixel_margin */);
    // gfx->println("Hello World!");
    

    delay(1000); // 1 second
}
