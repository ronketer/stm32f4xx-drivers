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
#define FLASH_BASEADDR							0x08000000U
#define SRAM1_BASEADDR							0x20000000U
#define SRAM2_BASEADDR							0x2001C000U
#define ROM										0x1FFF0000U

#define SRAM 									SRAM1_BASEADDR




#endif /* INC_STM32F405XX_H_ */
