#include<reg52.h>
#include"c52.h"

#define uchar unsigned char
#define uint unsigned int

uchar code table[] = {
	0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07,
	0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x71
};

uchar code weima[] = {
	0xfe, 0xfd, 0xfb, 0xf7, 0xef, 0xdf
};

void delayms(uint xms)
{
	uint i,j;
	for(i = xms;i>0;i--)
		for(j=110;j>0;j--);
}

void main(void)
{
	uint j;
	c52_init();
	while(1)
	{
		for(j = 0; j < 6; j++){
			HLDU = 1;
			P0 = table[j+1];
			HLDU = 0;
			P0 = 0xff;
			HLWE = 1;
			P0 = weima[j]; //1111 1110
			HLWE = 0;
			delayms(1);
		}
	}
}
