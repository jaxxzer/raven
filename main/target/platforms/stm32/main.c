#include <os/os.h>
#include <hal/gpio.h>
extern void app_main(void);

#warning temp fix
void assert(int c)
{
}

int main(void)
{
    hal_gpio_setup(HAL_PC(13), HAL_GPIO_DIR_OUTPUT, HAL_GPIO_PULL_NONE);
    hal_gpio_set_level(HAL_PC(13), HAL_GPIO_LOW);
    app_main();
    vTaskStartScheduler();
}