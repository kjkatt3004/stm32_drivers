#include "stm32f407xx.h"
#include "stm32f407xx_gpio_driver.h"

void delay(void)
{
	for(uint32_t i = 0; i < 500000; i++);
}

int main(void)
{
	GPIO_Handle_t GPIOled;

	GPIOled.pGPIO = GPIOD;
	GPIOled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GPIOled.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIOled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OUT_TYPE_OD;
	GPIOled.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_PU;
	GPIOled.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;

	GPIO_PeriClockControl(GPIOD, ENABLE);

	GPIO_init(&GPIOled);

	while(1)
	{
		GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		delay();
	}


	return 0;
}
