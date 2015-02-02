#include<reg52.h>

sbit FM = P2^3;

void delay(unsigned int t) //0-65535
{
	while(--t);
}

void main()
{
		while(1)
		{
			 FM = 1;
			 delay(80000);
			 FM = 0;
			 delay(80000);
		}
}
