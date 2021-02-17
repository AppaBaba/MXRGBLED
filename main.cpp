#include "mbed.h"
#include "rgbled.h"

#define SleepTime 200

//Creating a new RGB led object using PWM outputs
RGB AZRGB(RedRGB,GreenRGB,BlueRGB);

DigitalOut ledg(LED1);
DigitalOut ledb(LED2);
DigitalOut ledy(LED3);

static BufferedSerial az(USBTX, USBRX);


// main() runs in its own thread in the OS
int main()
{
    while (true) {
        printf("Toggle green RGB and LED\r\n");
        AZRGB.RGBcolor(0.0,0.75,0.0); //green
        ledg = !ledg;
        thread_sleep_for(SleepTime);
        printf("Toggle blue RGB and LED\r\n");
        AZRGB.RGBcolor(0.0,0.0,0.75); //blue
        ledb = !ledb;
        thread_sleep_for(SleepTime);
        printf("Toggle yellow RGB and LED\r\n");
        AZRGB.RGBcolor(0.75,0.75,0.0); //yellow
        ledy = !ledy;
        thread_sleep_for(SleepTime);

    }
}

