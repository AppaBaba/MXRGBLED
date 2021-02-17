#include "mbed.h"

//RGB LED class using three PWM outputs
class RGB
{
public:
    RGB(PinName redrgb, PinName greenrgb, PinName bluergb);
    void RGBcolor(float redled,float greenled, float blueled);
private:
    PwmOut RGBR;
    PwmOut RGBG;
    PwmOut RGBB;
};
RGB::RGB (PinName redrgb, PinName greenrgb, PinName bluergb)
    : RGBR(redrgb), RGBG(greenrgb), RGBB(bluergb)
{
    
}
 
void RGB::RGBcolor(float redled,float greenled, float blueled)
{
    RGBR = redled;
    RGBG = greenled;
    RGBB = blueled;
}