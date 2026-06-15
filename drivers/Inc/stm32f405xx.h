/*
 * stm32f405xx.h
 *
 *  Created on: Jun 14, 2026
 *      Author: ron
 */

#ifndef INC_STM32F405XX_H_
#define INC_STM32F405XX_H_


// base addresses of flash and SRAM memories


// U tells the compiler this are unsigned ( make sense since this are memory locations)
#define FLASH_BASEADDR    0x08000000U  // Base address for flash memory (where the compiled code lives)
#define SRAM1_BASEADDR    0x20000000U  // Main volatile memory (112KB) for global variables, stack, and heap
#define SRAM2_BASEADDR    0x2001C000U  // Secondary volatile memory (16KB), often used for DMA buffers
#define ROM               0x1FFF0000U  // System memory (contains ST's factory bootloader)

#define SRAM              SRAM1_BASEADDR



// ============================================================================
// 2. PERIPHERAL BUS HIERARCHY (The "Hardware Modules" Region)
// ============================================================================
// All hardware features (GPIO, Timers, UART) start at this grand base address:
#define PERIPH_BASEADDR       0x40000000U

// Peripherals are divided into different "Busses" (highways) based on speed.
// We find their locations by adding an offset to the grand PERIPH_BASEADDR.

//  APB Bus Domain Slower/Medium Speed Highways
#define APB1PERIPH_BASEADDR   PERIPH_BASEADDR
#define APB2PERIPH_BASEADDR   0x40010000U

// --- AHB Bus Domain (High-Performance/Direct-to-CPU Highways)
#define AHB1PERIPH_BASEADDR   0x40020000U
#define AHB2PERIPH_BASEADDR   0x50000000U


/*
* Base addresses of peripherals which are hanging on AHB1 bus
*
*/

#define GPIOA_BASEADDR      (AHB1PERIPH_BASEADDR + 0x0000)
#define GPIOB_BASEADDR      (AHB1PERIPH_BASEADDR + 0x0400)
#define GPIOC_BASEADDR      (AHB1PERIPH_BASEADDR + 0x0800)
#define GPIOD_BASEADDR      (AHB1PERIPH_BASEADDR + 0x0C00)
#define GPIOE_BASEADDR      (AHB1PERIPH_BASEADDR + 0x1000)
#define GPIOF_BASEADDR      (AHB1PERIPH_BASEADDR + 0x1400)
#define GPIOG_BASEADDR      (AHB1PERIPH_BASEADDR + 0x1800)
#define GPIOH_BASEADDR      (AHB1PERIPH_BASEADDR + 0x1C00)
#define GPIOI_BASEADDR      (AHB1PERIPH_BASEADDR + 0x2000)
#define GPIOJ_BASEADDR      (AHB1PERIPH_BASEADDR + 0x2400)
#define GPIOK_BASEADDR      (AHB1PERIPH_BASEADDR + 0x2800)


/*
* Base addresses of peripherals which are hanging on APB1 bus
*/


#define I2C1_BASEADDR        (APB1PERIPH_BASEADDR + 0x5400U)
#define I2C2_BASEADDR        (APB1PERIPH_BASEADDR + 0x5800U)
#define I2C3_BASEADDR        (APB1PERIPH_BASEADDR + 0x5C00U)

#define SPI2_BASEADDR        (APB1PERIPH_BASEADDR + 0x3800U)
#define SPI3_BASEADDR        (APB1PERIPH_BASEADDR + 0x3C00U)

#define USART2_BASEADDR      (APB1PERIPH_BASEADDR + 0x4400U)
#define USART3_BASEADDR      (APB1PERIPH_BASEADDR + 0x4800U)

// the UART perfierials do not suppoer synchrons communication (they do not connect to the clock)
#define UART4_BASEADDR       (APB1PERIPH_BASEADDR + 0x4C00U)
#define UART5_BASEADDR       (APB1PERIPH_BASEADDR + 0x5000U)


/*
* Base addresses of peripherals which are hanging on APB2 bus
*/

#define SPI1_BASEADDR        (APB2PERIPH_BASEADDR + 0x3000U)

#define USART1_BASEADDR      (APB2PERIPH_BASEADDR + 0x1000U)
#define USART6_BASEADDR      (APB2PERIPH_BASEADDR + 0x1400U)

#define EXTI_BASEADDR        (APB2PERIPH_BASEADDR + 0x3C00U)
#define SYSCFG_BASEADDR      (APB2PERIPH_BASEADDR + 0x3800U)



#endif /* INC_STM32F405XX_H_ */
