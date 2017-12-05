#include "REG51.h"  //Declare header file
#define LED P3           //Defining the port P3
sbit S=P1^0;           //Defining a pin of port P0

long int i;
void main()             //Main function defined with return value
{
while(1)                //infinite loop
{
if(S==0)
LED=0xFF;
else                    //equal to { if(LDR==1)}
{
LED=0x00;
	for(i=0;i<7500;i++);   //Delay
	LED=0xff;
	for(i=0;i<7500;i++);  //Delay
}
}
}