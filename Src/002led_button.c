#include "stm32f407xx.h"
#include "stm32f407xx_gpio_driver.h"

#define HIGH 		1
#define BTN_PRESSED HIGH


void delay(void)
{
	for(uint32_t i = 0; i < 500000/2; i++);
}

int main(void)
{
	GPIO_Handle_t GPIOled, GPIOBtn;

	// led gpio configuration
	GPIOled.pGPIO = GPIOD;
	GPIOled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GPIOled.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIOled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OUT_TYPE_PP;
	GPIOled.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIOled.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;

	GPIO_PeriClockControl(GPIOD, ENABLE);

	GPIO_init(&GPIOled);

	// btn gpio configuration
	GPIOBtn.pGPIO = GPIOA;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;

	GPIO_PeriClockControl(GPIOA, ENABLE);

	GPIO_init(&GPIOBtn);

	while(1)
	{
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
			delay();
			GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		}
	}


	return 0;
}
