#ifndef MAIN_H
#define MAIN_H

#include "stm32l476xx.h"

#define START 5
#define POST 0
#define HISTOGRAM 1
#define POST_SUCCESS 1
#define POST_FAIL 2

uint8_t rxByte1=0,rxByte2=0,dec_str[32],dec_str2[32];
uint32_t t1,t2,dt[1002]={0},temp,prev,count=1;
uint16_t counter,mutex_lock=5,flag=0,flag2,num,low_bound,up_bound;


char start[] = "\r\n\r\nWhen you want to start a new measurement press n ";
char freq[] = "\r\nPlease set a valid frequenncy greater than 10hz ";
char enter[] = "\r\nYou entered the program\r\n";
char result_pass[]= "\r\n\r\nGPIO is reading pulses atleast once in every 100ms "; 
char result_fail[]= "\r\n\r\nGPIO is not reading pulses atleast once in 100ms ";
char randomstuff[]= "\r\n\rYeah";


void timer_capture(void);
int POST_function(void);
void getlimits(unsigned short* x,unsigned short* y);


#endif 


