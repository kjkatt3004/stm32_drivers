

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/*
 * base addresses of Flash and SRAM memories
 */

#define Flash_BASEADDRESS				0x08000000U			/* |< base address of flash memory */
#define SRAM1_BASEADDRESS				0x20000000U			/* |< base address of SRAM1 */
#define SRAM							SRAM1_BASEADDRESS	/* |< base address of SRAM */
#define SRAM2							0x2001C000U			/* |< base address of SRAM2 */
#define ROM								0x1FFF0000U			/* |< base address of ROM */


/*
 * AHBx and APBx bus peripheral base addresses
 */

#define PERIPH_BASEADDRESS				0x40000000U
#define APB1_BASEADDRESS				PERIPH_BASEADDRESS
#define APB2_BASEADDRESS				0x40010000U
#define AHB1_BASEADDRESS				0x40020000U
#define AHB2_BASEADDRESS				0x50000000U

/*
 * base addresses of peripherals which are hanging on AHB1 bus
 */
#define GPIOA_BASEADDRESS				(AHB1_BASEADDRESS + 0x0000)
#define GPIOB_BASEADDRESS				(AHB1_BASEADDRESS + 0x0400)
#define GPIOC_BASEADDRESS				(AHB1_BASEADDRESS + 0x0800)
#define GPIOD_BASEADDRESS				(AHB1_BASEADDRESS + 0x0C00)
#define GPIOE_BASEADDRESS				(AHB1_BASEADDRESS + 0x1000)
#define GPIOF_BASEADDRESS				(AHB1_BASEADDRESS + 0x1400)
#define GPIOG_BASEADDRESS				(AHB1_BASEADDRESS + 0x1800)
#define GPIOH_BASEADDRESS				(AHB1_BASEADDRESS + 0x1C00)
#define GPIOI_BASEADDRESS				(AHB1_BASEADDRESS + 0x2000)


/*
 * base addresses of peripherals which are hanging on APB1 bus
 */
#define I2C1_BASEADDRESS				(APB1_BASEADDRESS + 0x5400)
#define I2C2_BASEADDRESS				(APB1_BASEADDRESS + 0x5800)
#define I2C3_BASEADDRESS				(APB1_BASEADDRESS + 0x5C00)
#define SPI2_BASEADDRESS				(APB1_BASEADDRESS + 0x3800)
#define SPI3_BASEADDRESS				(APB1_BASEADDRESS + ox3C00)
#define USART2_BASEADDRESS				(APB1_BASEADDRESS + ox4400)
#define USART3_BASEADDRESS				(APB1_BASEADDRESS + ox4800)
#define UART4_BASEADDRESS				(APB1_BASEADDRESS + ox4C00)
#define UART5_BASEADDRESS				(APB1_BASEADDRESS + ox5000)

/*
 * base addresses of peripherals which are hanging on APB2 bus
 */
#define EXTI_BASEADDRESS				(APB2_BASEADDRESS + 0x3C00)
#define SPI1_BASEADDRESS				(APB2_BASEADDRESS + 0x3000)
#define SYSCFG_BASEADDRESS				(APB2_BASEADDRESS + 0x3800)
#define USART1_BASEADDRESS				(APB2_BASEADDRESS + 0x1000)
#define USART6_BASEADDRESS				(APB2_BASEADDRESS + 0x1400)



/*********************** peripheral register definition structures *******************************/




#endif /* INC_STM32F407XX_H_ */
