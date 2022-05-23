#include <stdint.h>
#include <stddef.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>

/* Driver configuration */
#include "ti_drivers_config.h"

#include <ti/drivers/Timer.h>

const unsigned long periodGCD = 500000;
/*
void s1_Cycle() {
    //GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
}

void s2_Cycle(){
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
}

void s3_Cycle(){
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_OFF);
}

void o1_Cycle() {
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
}

void o2_Cycle() {
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_OFF);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_ON);
    usleep(periodGCD);
    usleep(periodGCD);
    usleep(periodGCD);
    GPIO_write(CONFIG_GPIO_LED_1, CONFIG_GPIO_LED_OFF);
}
*/
