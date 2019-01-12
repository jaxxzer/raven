#include <os/os.h>
#include <libopencm3/stm32/f1/gpio.h>

extern void app_main(void);

#warning temp fix
void assert(int c)
{
}

int main(void)
{
    app_main();
    vTaskStartScheduler();
}