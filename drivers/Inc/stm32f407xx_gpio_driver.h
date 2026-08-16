
#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_


#include "stm32f407xx.h"


/*
 * This is a configuration structure for a GPIO pin
 */
typedef struct
{
	uint8_t GPIO_PinNumber;			/*!< Possible values from @GPIO_PIN_NUMBER >*/
	uint8_t GPIO_PinMode;			/*!< Possible values from @GPIO_PIN_MODES >*/
	uint8_t GPIO_PinSpeed;			/*!< Possible values from @GPIO_SPEED_TYPE >*/
	uint8_t GPIO_PinPuPdControl;	/*!< Possible values from @GPIO_PUPD >*/
	uint8_t GPIO_PinOPType;			/*!< Possible values from @GPIO_OP_TYPE >*/
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;

/*
 * This is a Handle structure for a GPIO pin
 */
typedef struct
{
	GPIO_RegDef_t    *pGPIO; /*!< This holds the base address of the GPIO port to which the pin belongs >*/
	GPIO_PinConfig_t GPIO_PinConfig;	/*!< This holds GPIO pin configuration settings >*/
}GPIO_Handle_t;

/*
 * @GPIO_PIN_MODES
 * GPIO pin possible modes
 */
#define GPIO_MODE_IN 		0	/*!< Input Mode >*/
#define GPIO_MODE_OUT 		1	/*!< Output Mode >*/
#define GPIO_MODE_ALTFN 	2	/*!< Alternate function Mode >*/
#define GPIO_MODE_ANALOG 	3	/*!< Analog Mode >*/
#define GPIO_MODE_IT_FT		4	/*!< Interrupt Mode with Falling Edge Detection>*/
#define GPIO_MODE_IT_RT		5	/*!< Interrupt Mode with Rising Edge detection>*/
#define GPIO_MODE_IT_RFT	6	/*!< Interrupt Mode with both Rising and Falling Edge Detection>*/

/*
 * @GPIO_OP_TYPE
 * GPIO pin possible output types
 */
#define GPIO_OUT_TYPE_PP	0
#define GPIO_OUT_TYPE_OD	1


/*
 * @GPIO_SPEED_TYPE
 * GPIO pin possible output speeds
 */
#define GPIO_SPEED_LOW			0
#define GPIO_SPEED_MEDIUM		1
#define GPIO_SPEED_HIGH			2
#define GPIO_SPEED_VERY_HIGH	3

/*
 * @GPIO_PUPD
 * GPIO pin Pull-up/Pull-down
 */
#define GPIO_NO_PUPD		0
#define GPIO_PIN_PU			1
#define GPIO_PIN_PD			2

/*
 * @GPIO_PIN_NUMBER
 * GPIO pin numbers
 */
#define GPIO_PIN_NO_0		0
#define GPIO_PIN_NO_1		1
#define GPIO_PIN_NO_2		2
#define GPIO_PIN_NO_3		3
#define GPIO_PIN_NO_4		4
#define GPIO_PIN_NO_5		5
#define GPIO_PIN_NO_6		6
#define GPIO_PIN_NO_7		7
#define GPIO_PIN_NO_8		8
#define GPIO_PIN_NO_9		9
#define GPIO_PIN_NO_10		10
#define GPIO_PIN_NO_11		11
#define GPIO_PIN_NO_12		12
#define GPIO_PIN_NO_13		13
#define GPIO_PIN_NO_14		14
#define GPIO_PIN_NO_15		15


/*************************************************************************************************************
 * 						APIs supported by the GPIO driver
 *************************************************************************************************************/

/*
 * Peripheral clock setup
 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnOrDi);

/*
 * init and de-init
 */
void GPIO_init(GPIO_Handle_t *pGPIOHandle);
void GPIO_deinit(GPIO_RegDef_t *pGPIOx);

/*
 * Data read and write
 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

/*
 * IRQ configuration and ISR handling
 */
void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnOrDi);
void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint8_t IRQPriority);
void GPIO_IRQHandling(uint8_t PinNumber);

#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
