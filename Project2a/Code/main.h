#ifndef MAIN_H
#define MAIN_H

#include "stm32l476xx.h"

#define run 0
#define pause 1
#define error 2

#define decodeOpcode(x)  (x>>5 & 0x07)
#define decodeRange(y) (y & 0x1F)

#define TEST_SNIPPET LOOP

enum 
{
  RECIPE_END = 0x0,
  MOV = 0x20, //32
  //BREAK_LOOP = 0x30, //48
  WAIT_TIME = 0x40, //64
  SKIP= 0x60, //96
  LOOP_START = 0x80, //128
  LOOP_END = 0xA0, //160
  BREAK = 0xE0, //224
}
Recipe_cmd;


uint8_t rx_cmd1,rx_cmd2,rx_cmd3=0,buf_servoA[25]={0},buf_servoB[25]={0},buffer[32],flagsyncA,flagsyncB;
static uint8_t test=0,statusA,statusB,test2,mask=31;
int m,n;
char command1[] = "\r\n Enter command1: ";
char command2[] = "\r\n Enter command2: ";
char command3[] = "\r\n Press enter ";
char command4[] = "\r\n Invalid entry A ";
char command5[] = "\r\n Invalid entry B ";
char command6[] = "\r\n Enter not pressed ";

void timer_PWM(void);
void timer_wait(void);
void user_command(uint8_t x, uint8_t y, uint8_t z);
void testsnipp(void);
void runsnipp(void);

struct cmdparameters
{
	uint8_t * cmdparam;
}servoA,servoB;



#endif 


