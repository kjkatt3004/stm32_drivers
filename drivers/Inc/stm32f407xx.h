
#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>
#define __vo volatile
/*
 * base addresses of Flash and SRAM memories
 */
#define Flash_BASEADDRESS				0x08000000U						/* !< base address of flash memory > */
#define SRAM1_BASEADDRESS				0x20000000U						/* !< base address of SRAM1 > */
#define SRAM_BASEADDRESS				SRAM1_BASEADDRESS				/* !< base address of SRAM > */
#define SRAM2_BASEADDRESS				0x2001C000U						/* !< base address of SRAM2 > */
#define ROM_BASEADDRESS					0x1FFF0000U						/* !< base address of ROM > */


/*
 * AHBx and APBx bus peripheral base addresses
 */
#define PERIPH_BASEADDRESS				0x40000000U						/* !< base address of APB1 > */
#define APB1_BASEADDRESS				PERIPH_BASEADDRESS				/* !< base address of APB1 > */
#define APB2_BASEADDRESS				0x40010000U						/* !< base address of APB2 > */
#define AHB1_BASEADDRESS				0x40020000U						/* !< base address of AHB1 > */
#define AHB2_BASEADDRESS				0x50000000U						/* !< base address of AHB2 > */

/*
 * base addresses of peripherals which are hanging on AHB1 bus
 */
#define GPIOA_BASEADDRESS				(AHB1_BASEADDRESS + 0x0000)		/* !< base address of GPIOA > */
#define GPIOB_BASEADDRESS				(AHB1_BASEADDRESS + 0x0400)		/* !< base address of GPIOB > */
#define GPIOC_BASEADDRESS				(AHB1_BASEADDRESS + 0x0800)		/* !< base address of GPIOC > */
#define GPIOD_BASEADDRESS				(AHB1_BASEADDRESS + 0x0C00)		/* !< base address of GPIOD > */
#define GPIOE_BASEADDRESS				(AHB1_BASEADDRESS + 0x1000)		/* !< base address of GPIOE > */
#define GPIOF_BASEADDRESS				(AHB1_BASEADDRESS + 0x1400)		/* !< base address of GPIOF > */
#define GPIOG_BASEADDRESS				(AHB1_BASEADDRESS + 0x1800)		/* !< base address of GPIOG > */
#define GPIOH_BASEADDRESS				(AHB1_BASEADDRESS + 0x1C00)		/* !< base address of GPIOH > */
#define GPIOI_BASEADDRESS				(AHB1_BASEADDRESS + 0x2000)		/* !< base address of GPIOI > */

#define RCC_BASEADDRESS					(AHB1_BASEADDRESS + 0x3800)		/* !< base address of RCC > */


/*
 * base addresses of peripherals which are hanging on APB1 bus
 */
#define I2C1_BASEADDRESS				(APB1_BASEADDRESS + 0x5400)		/* !< base address of I2C1 > */
#define I2C2_BASEADDRESS				(APB1_BASEADDRESS + 0x5800)		/* !< base address of I2C2 > */
#define I2C3_BASEADDRESS				(APB1_BASEADDRESS + 0x5C00)		/* !< base address of I2C3 > */
#define SPI2_BASEADDRESS				(APB1_BASEADDRESS + 0x3800)		/* !< base address of SPI2 > */
#define SPI3_BASEADDRESS				(APB1_BASEADDRESS + ox3C00)		/* !< base address of SPI3 > */
#define USART2_BASEADDRESS				(APB1_BASEADDRESS + ox4400)		/* !< base address of USART2 > */
#define USART3_BASEADDRESS				(APB1_BASEADDRESS + ox4800)		/* !< base address of USART3 > */
#define UART4_BASEADDRESS				(APB1_BASEADDRESS + ox4C00)		/* !< base address of UART4 > */
#define UART5_BASEADDRESS				(APB1_BASEADDRESS + ox5000)		/* !< base address of UART5 > */

/*
 * base addresses of peripherals which are hanging on APB2 bus
 */
#define EXTI_BASEADDRESS				(APB2_BASEADDRESS + 0x3C00)		/* !< base address of EXTI > */
#define SPI1_BASEADDRESS				(APB2_BASEADDRESS + 0x3000)		/* !< base address of SPI1 > */
#define SYSCFG_BASEADDRESS				(APB2_BASEADDRESS + 0x3800)		/* !< base address of SYSCFG > */
#define USART1_BASEADDRESS				(APB2_BASEADDRESS + 0x1000)		/* !< base address of USART1 > */
#define USART6_BASEADDRESS				(APB2_BASEADDRESS + 0x1400)		/* !< base address of USART6 > */



/*********************** peripheral register definition structures *******************************/

typedef struct
{
	__vo uint32_t MODER;		/*!< GPIO port mode register,											Address offset: 0x00 > */
	__vo uint32_t OTYPER;		/*!< GPIO port output type register,									Address offset: 0x04 > */
	__vo uint32_t OSPEEDR;		/*!< GPIO port output speed register,									Address offset: 0x08 > */
	__vo uint32_t PUPDR;		/*!< GPIO port pull-up/pull-down register,								Address offset: 0x0C > */
	__vo uint32_t IDR;			/*!< GPIO port input data register,										Address offset: 0x10 > */
	__vo uint32_t ODR;			/*!< GPIO port output data register ,									Address offset: 0x14 > */
	__vo uint32_t BSRR;			/*!< GPIO port bit set/reset register,									Address offset: 0x18 > */
	__vo uint32_t LCKR;			/*!< GPIO port configuration lock register,								Address offset: 0x1C > */
	__vo uint32_t AFR[2];		/*!< AFR[0] : GPIO alternate function low register,						Address offset: 0x20
								 	 AFR[1] : GPIO alternate function low register						Address offset: 0x24 > */
}GPIO_RegDef_t;

typedef struct
{
	__vo uint32_t CR;			/*!< RCC clock control register,										Address offset: 0x00 > */
	__vo uint32_t PLLCFGR;		/*!< RCC PLL configuration register,									Address offset: 0x04 > */
	__vo uint32_t CFGR;			/*!< RCC clock configuration register,									Address offset: 0x08 > */
	__vo uint32_t CIR;			/*!< RCC clock interrupt register,										Address offset: 0x0C > */
	__vo uint32_t AHB1RSTR;		/*!< RCC AHB1 peripheral reset register,								Address offset: 0x10 > */
	__vo uint32_t AHB2RSTR;		/*!< RCC AHB2 peripheral reset register,								Address offset: 0x14 > */
	__vo uint32_t AHB3RSTR;		/*!< RCC AHB3 peripheral reset register,								Address offset: 0x18 > */
	uint32_t      Reserved0;	/*!< Reserved0,															Address offset: 0x1C > */
	__vo uint32_t APB1RSTR;		/*!< RCC APB1 peripheral reset register,								Address offset: 0x20 > */
	__vo uint32_t APB2RSTR ;	/*!< RCC APB2 peripheral reset register,								Address offset: 0x24 > */
	uint32_t      Reserved1[2];	/*!< Reserved1[0], 														Address offset: 0x28
	   	   	   	   	   	   	   	   	 Reserved1[1]														Address offset: 0x2C > */
	__vo uint32_t AHB1ENR;		/*!< RCC AHB1 peripheral clock enable register,							Address offset: 0x30 > */
	__vo uint32_t AHB2ENR;		/*!< RCC AHB2 peripheral clock enable register,							Address offset: 0x34 > */
	__vo uint32_t AHB3ENR;		/*!< RCC AHB3 peripheral clock enable register,							Address offset: 0x38 > */
	uint32_t      Reserved2;	/*!< Reserved2,															Address offset: 0x3C > */
	__vo uint32_t APB1ENR;		/*!< RCC APB1 peripheral clock enable register,							Address offset: 0x40 > */
	__vo uint32_t APB2ENR;		/*!< RCC APB2 peripheral clock enable register,							Address offset: 0x44 > */
	uint32_t      Reserved3[2];	/*!< Reserved3[0],														Address offset: 0x48 > */
								/*!< Reserved3[1],														Address offset: 0x4C > */
	__vo uint32_t AHB1LPENR;	/*!< RCC AHB1 peripheral clock enable in low power mode register,		Address offset: 0x50 > */
	__vo uint32_t AHB2LPENR;	/*!< RCC AHB2 peripheral clock enable in low power mode register,		Address offset: 0x54 > */
	__vo uint32_t AHB3LPENR;	/*!< RCC AHB3 peripheral clock enable in low power mode register,		Address offset: 0x58 > */
	uint32_t      Reserved4;	/*!< Reserved4,															Address offset: 0x5C > */
	__vo uint32_t APB1LPENR;	/*!< RCC APB1 peripheral clock enable in low power mode register,		Address offset: 0x60 > */
	__vo uint32_t APB2LPENR;	/*!< RCC APB2 peripheral clock enabled in low power mode,				Address offset: 0x64 > */
	uint32_t      Reserved5[2];	/*!< Reserved5[0],														Address offset: 0x68 > */
								/*!< Reserved5[1],														Address offset: 0x6C */
	__vo uint32_t BDCR;			/*!< RCC Backup domain control register,								Address offset: 0x70 > */
	__vo uint32_t CSR;			/*!< RCC clock control & status register,								Address offset: 0x74 > */
	uint32_t      Reserved6[2];	/*!< Reserved6[0],														Address offset: 0x78 > */
								/*!< Reserved6[1],														Address offset: 0x7C > */
	__vo uint32_t SSCGR;		/*!< RCC spread spectrum clock generation register,						Address offset: 0x80 > */
	__vo uint32_t PLLI2SCFGR;	/*!< RCC PLLI2S configuration register,									Address offset: 0x84 > */
}RCC_RegDef_t;


/*
 * peripheral definitions (peripheral base addresses typecasted to xxx_RegDef_t)
 */

/******************************************* GPIO **************************************************/

#define GPIOA							((GPIO_RegDef_t*) GPIOA_BASEADDRESS)
#define GPIOB							((GPIO_RegDef_t*) GPIOB_BASEADDRESS)
#define GPIOC							((GPIO_RegDef_t*) GPIOC_BASEADDRESS)
#define GPIOD							((GPIO_RegDef_t*) GPIOD_BASEADDRESS)
#define GPIOE							((GPIO_RegDef_t*) GPIOE_BASEADDRESS)
#define GPIOF							((GPIO_RegDef_t*) GPIOF_BASEADDRESS)
#define GPIOG							((GPIO_RegDef_t*) GPIOG_BASEADDRESS)
#define GPIOH							((GPIO_RegDef_t*) GPIOH_BASEADDRESS)
#define GPIOI							((GPIO_RegDef_t*) GPIOI_BASEADDRESS)

#define RCC								((RCC_RegDef_t*) RCC_BASEADDRESS)


/*
 * Clock Enable Macros for GPIOx peripherals
 */
#define GPIOA_PCLK_EN()					(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()					(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()					(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()					(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()					(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()					(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()					(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()					(RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN()					(RCC->AHB1ENR |= (1 << 8))


/*
 * Clock Enable Macros for I2C peripherals
 */
#define I2C1_PCLK_EN()					(RCC->APB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()					(RCC->APB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()					(RCC->APB1ENR |= (1 << 23))


/*
 * Clock Enable Macros for SPI peripherals
 */
#define SPI1_PCLK_EN()					(RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN()					(RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN()					(RCC->APB1ENR |= (1 << 15))

/*
 * Clock Enable Macros for USART peripherals
 */
#define USART2_PCLK_EN()				(RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN()				(RCC->APB1ENR |= (1 << 18))
#define USART1_PCLK_EN()				(RCC->APB2ENR |= (1 << 4))
#define USART6_PCLK_EN()				(RCC->APB2ENR |= (1 << 5))

/*
 * Clock Enable Macros for SYSCFG peripheral
 */
#define SYSCFG_PCLK_EN()				(RCC->APB2ENR |= (1 << 14))


/*
 * Clock Disable Macros for GPIOx peripherals
 */
#define GPIOA_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DI()					(RCC->AHB1ENR &= ~(1 << 8))

/*
 * Clock Disable Macros for I2C peripherals
 */
#define I2C1_PCLK_DI()					(RCC->APB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DI()					(RCC->APB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DI()					(RCC->APB1ENR &= ~(1 << 23))


/*
 * Clock Disable Macros for SPI peripherals
 */
#define SPI1_PCLK_DI()					(RCC->APB2ENR &= ~(1 << 12))
#define SPI2_PCLK_DI()					(RCC->APB1ENR &= ~(1 << 14))
#define SPI3_PCLK_DI()					(RCC->APB1ENR &= ~(1 << 15))


/*
 * Clock Disable Macros for USART peripherals
 */
#define USART2_PCLK_DI()				(RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DI()				(RCC->APB1ENR &= ~(1 << 18))
#define USART1_PCLK_DI()				(RCC->APB2ENR &= ~(1 << 4))
#define USART6_PCLK_DI()				(RCC->APB2ENR &= ~(1 << 5))

/*
 * Clock Disable Macros for SYSCFG peripheral
 */
#define SYSCFG_PCLK_DI()				(RCC->APB2ENR &= ~(1 << 14))


/*
 * Some generic macros
 */
#define ENABLE 			1
#define DISABLE 		0
#define SET 			ENABLE
#define RESET 			DISABLE
#define GPIO_PIN_SET	SET
#define GPIO_PIN_RESET	RESET


#endif /* INC_STM32F407XX_H_ */
