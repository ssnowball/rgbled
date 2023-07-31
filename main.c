#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

const uint PIN_LED_RED = 11;
const uint PIN_LED_GREEN = 12;
const uint PIN_LED_BLUE = 13;

void main(void) {
	bi_decl(bi_program_description("this is a program to light a RGB LED"));
	
	stdio_init_all();
	
	gpio_init(PIN_LED_RED);
	gpio_set_dir(PIN_LED_RED, GPIO_OUT);
	
	gpio_init(PIN_LED_GREEN);
	gpio_set_dir(PIN_LED_GREEN, GPIO_OUT);
	
	gpio_init(PIN_LED_BLUE);
	gpio_set_dir(PIN_LED_BLUE, GPIO_OUT);
	
	while(1) {
		
		gpio_put(PIN_LED_RED, 1);
		gpio_put(PIN_LED_GREEN, 0);
		gpio_put(PIN_LED_BLUE, 1);
		
		sleep_ms(1000);
		
		gpio_put(PIN_LED_RED, 0);
		gpio_put(PIN_LED_GREEN, 1);
		gpio_put(PIN_LED_BLUE, 0);
		
		sleep_ms(1000);
		
		gpio_put(PIN_LED_RED, 0);
		gpio_put(PIN_LED_GREEN, 1);
		gpio_put(PIN_LED_BLUE, 1);
		
		sleep_ms(1000);
		
		gpio_put(PIN_LED_RED, 1);
		gpio_put(PIN_LED_GREEN, 1);
		gpio_put(PIN_LED_BLUE, 0);
		
		sleep_ms(1000);
		
	}

}
