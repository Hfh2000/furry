#include <stdio.h>
#include <stdlib.h>

void init()
{

    usb_init();
    usb_device_init();
    stdio_usb_init();

}