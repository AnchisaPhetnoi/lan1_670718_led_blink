#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h" 


void app_main(void)
{
    gpio_set_direction(5, GPIO_MODE_OUTPUT)
      gpio_set_level(2, GPIO_MODE_OUTPUT);
      int button2 = 0;
    while (1) {

    //  gpio_set_level(5,1);
      // vTaskDelay(500 / pprtTICK_PERIOD_MS);
       // gpio_set_level(5,0);
       // vTaskDelay(500/ portTICK_PERIOD_MS);

       button2 = gpio_set_level(GPIO_NUM_17);
       printf("Button 2 = %d\n", button2);
       if(button2 == 1)
       {
        gpio_set_level(5,1);
       }
       else
       {
        gpio_set_level(5,0);
       }
       vTaskDelay(500/ portTICK_PERIOD_MS);
    }
}
