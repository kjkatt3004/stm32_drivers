
#include "stm32f407xx_gpio_driver.h"

/*
 * Peripheral clock setup
 */

/**********************************************************************************************
 * @fn					- GPIO_PeriClockControl
 *
 * @brief				- This function enables or disables peripheral clock for the given GPIO port
 *
 * @param[in]			- base address of the gpio peripheral
 * @param[in]			- ENABLE or DISABLE macro
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnOrDi)
{

}

/*
 * init and de-init
 */

/**********************************************************************************************
 * @fn					- GPIO_init
 *
 * @brief				- This function initializes the GPIO port
 *
 * @param[in]			- address of the GPIO Handle
 * @param[in]			-
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_init(GPIO_Handle_t *pGPIOHandle)
{

}


/**********************************************************************************************
 * @fn					- GPIO_deinit
 *
 * @brief				- This function resets the GPIO peripheral
 *
 * @param[in]			- base address of the GPIO peripheral
 * @param[in]			-
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_deinit(GPIO_RegDef_t *pGPIOx)
{

}

/*
 * Data read and write
 */

/**********************************************************************************************
 * @fn					- GPIO_ReadFromInputPin
 *
 * @brief				- This function reads input from the given pin
 *
 * @param[in]			- base address of the GPIO peripheral
 * @param[in]			- pin number : (0-15)
 * @param[in]			-
 *
 * @return				- 0/1
 *
 * @Note				- none

 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
	return 0;
}

/**********************************************************************************************
 * @fn					- GPIO_ReadFromInputPort
 *
 * @brief				- This function reads input from the GPIO port
 *
 * @param[in]			- base address of the GPIO peripheral
 * @param[in]			-
 * @param[in]			-
 *
 * @return				- 16 pin values
 *
 * @Note				- none

 */
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{
	return 0;
}

/**********************************************************************************************
 * @fn					- GPIO_WriteToOutputPin
 *
 * @brief				- This function writes to the output pin
 *
 * @param[in]			- base address of the GPIO peripheral
 * @param[in]			- pin number : (0-15)
 * @param[in]			- value : 0/1
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{

}

/**********************************************************************************************
 * @fn					- GPIO_WriteToOutputPort
 *
 * @brief				- This function writes to the output GPIO port
 *
 * @param[in]			- base address of the GPIO peripheral
 * @param[in]			- 16 pin values
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{

}

/**********************************************************************************************
 * @fn					- GPIO_ToggleOutputPin
 *
 * @brief				- This function toggles the output pin
 *
 * @param[in]			- base address of the GPIO port
 * @param[in]			- pin number : (0-15)
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/*
 * IRQ configuration and ISR handling
 */

/**********************************************************************************************
 * @fn					- GPIO_IRQConfig
 *
 * @brief				- This function sets the interrupt
 *
 * @param[in]			- IRQ Number
 * @param[in]			- IRQ priority
 * @param[in]			- ENABLE or DISABLE macro
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnOrDi)
{

}

/**********************************************************************************************
 * @fn					- GPIO_IRQHandling
 *
 * @brief				- This function handles the interrupt
 *
 * @param[in]			- pin number : (0-15)
 * @param[in]			-
 * @param[in]			-
 *
 * @return				- none
 *
 * @Note				- none

 */
void GPIO_IRQHandling(uint8_t PinNumber)
{

}
