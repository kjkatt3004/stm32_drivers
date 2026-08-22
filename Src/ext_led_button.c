#include "stm32f407xx.h"
#include "stm32f407xx_gpio_driver.h"

#define HIGH 		1
#define LOW			0
#define BTN_PRESSED LOW


void delay(void)
{
	for(uint32_t i = 0; i < 500000/2; i++);
}

int main(int argc, char *argv[])
{
	GPIO_Handle_t GPIOled, GPIOBtn;

	// led gpio configuration
	GPIOled.pGPIO = GPIOA;
	GPIOled.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_8;
	GPIOled.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GPIOled.GPIO_PinConfig.GPIO_PinOPType = GPIO_OUT_TYPE_PP;
	GPIOled.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIOled.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;

	GPIO_PeriClockControl(GPIOled.pGPIO, ENABLE);

	GPIO_init(&GPIOled);

	// btn gpio configuration
	GPIOBtn.pGPIO = GPIOB;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_PU;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_MEDIUM;

	GPIO_PeriClockControl(GPIOBtn.pGPIO, ENABLE);

	GPIO_init(&GPIOBtn);

	while(1)
	{
		if(GPIO_ReadFromInputPin(GPIOBtn.pGPIO, GPIOBtn.GPIO_PinConfig.GPIO_PinNumber) == BTN_PRESSED)
		{
			delay();
			GPIO_ToggleOutputPin(GPIOled.pGPIO, GPIOled.GPIO_PinConfig.GPIO_PinNumber);
		}
	}


	return 0;
}
