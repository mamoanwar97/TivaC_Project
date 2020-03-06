#ifndef LCD_H
#define LCD_H
#include "stdint.h"
#include "std_types.h"
#include "tm4c123gh6pm.h"
/******************************************************************************/
#define PORTA							0
#define PORTB							1
#define PORTC							2
#define PORTD							3
#define PORTE							4
#define PORTF							5
/*******************************DATA PORT MACROS*******************************/
#define DATAPORT						PORTB
#define DATAPORT_DIR_R 					GPIO_PORTB_DIR_R
#define DATAPORT_DEN_R 					GPIO_PORTB_DEN_R
#define DATAPORT_AMSEL_R 				GPIO_PORTB_AMSEL_R
#define DATAPORT_LOCK_R 				GPIO_PORTB_LOCK_R
#define DATAPORT_CR_R 					GPIO_PORTB_CR_R
#define DATAPORT_AFSEL_R				GPIO_PORTB_AFSEL_R
#define DATAPORT_DATA_R				    GPIO_PORTB_DATA_R
/*******************************CONTROL PORT MACROS****************************/
#define CONTROLPORT						PORTA
#define CONTROLPORT_DIR_R 	  		    GPIO_PORTA_DIR_R
#define CONTROLPORT_DEN_R 				GPIO_PORTA_DEN_R
#define CONTROLPORT_AMSEL_R 			GPIO_PORTA_AMSEL_R
#define CONTROLPORT_LOCK_R 				GPIO_PORTA_LOCK_R
#define CONTROLPORT_CR_R 				GPIO_PORTA_CR_R
#define CONTROLPORT_AFSEL_R				GPIO_PORTA_AFSEL_R
#define CONTROLPORT_DATA_R				GPIO_PORTA_DATA_R
#define RS 								2
#define RW							    3
#define ENB 							4
/********************************LCD Commands**********************************/
#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define CURSOR_BLINKING 0x0F
#define SET_CURSOR_LOCATION 0x80

void delay(void);
void Control_Pins_Init(void);
void Data_Port_Init(void);
void Send_Command(uint8 command);
void Display_Character(uint8 character);
void Display_String(const char* ptr2string);
void Set_Position(uint8 row , uint8 col);
void Delete_Last_Char(void);
void LCD_Init(void);
void Clear_Screen(void);
#endif