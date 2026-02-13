 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
*/

/*
? [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#include "mcc_generated_files/system/system.h"

#define NUMBER_OF_LEDS      ( 8 )
#define ARRAY_SIZE          ( NUMBER_OF_LEDS * 3)
uint8_t Custom_SPI;

typedef struct{
    uint8_t greenChannel;
    uint8_t redChannel;
    uint8_t blueChannel;
}color_t;

color_t const colors[ARRAY_SIZE] =
{
    {0x0F, 0x00, 0x00},     //LED0 (Green)
    {0x00, 0x0F, 0x00},     //LED1 (Red)
    {0x00, 0x00, 0x0F},     //LED2 (Blue)
    {0x0F, 0x0F, 0x00},     //LED3 (Orange)
    {0x0F, 0x00, 0x0F},     //LED4 (Cyan)
    {0x00, 0x0F, 0x0F},     //LED5 (Purple)
    {0x0F, 0x0F, 0x0F},     //LED6 (White)
    {0x05, 0x0F, 0x0A},     //LED7 (Pink)
    
};

static void WriteLEDsArray(color_t const * const array){
    SPI1_Open(Custom_SPI);
    SPI1_BufferExchange(array, ARRAY_SIZE);
    SPI1_Close();
}

int main(void)
{
    SYSTEM_Initialize();
    
    WriteLEDsArray(colors);


    while(1)
    {
    }    
}