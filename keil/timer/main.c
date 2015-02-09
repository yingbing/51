#include<reg52.h>
#include"led.h"

unsigned char i;

void main(void)
{
	TMOD = 0x01;
	TH0 = 0;
	TL0 = 0;
	ET0 = 1;
	TR0 = 1;
	EA = 1;
	while(1);
}

void t0_delay(void) interrupt 1
{
	i++;
	TR0 = 0;
	TH0 = 0;
	TL0 = 0;
	if(i == 20)
	{
		i = 0;
		LED0 = ~LED0;
	}
	TR0 = 1;
}