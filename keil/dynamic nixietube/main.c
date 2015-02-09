#include<reg52.h>
#include"c52.h"

#define uchar unsigned char
#define uint unsigned int

uchar code table[] = {
	0x3f,
	0x06,
	0x5b,
	0x4f,
	0x66,
	0x6d,
	0x7d,
	0x07,
	0x7f,
	0x6f,
	0x77,
	0x7c,
	0x39,
	0x5e,
	0x71
};

void delayms(uint xms)
{
	uint i,j;
	for(i = xms;i>0;i--)
		for(j=110;j>0;j--);
}

void main(void)
{
	c52_init();
	
	while(1)
	{
		HLDU = 1;
		P0 = table[1];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xfe; //1111 1110
		HLWE = 0;
		delayms(1);
		
		HLDU = 1;
		P0 = table[2];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xfd; //1111 1101
		HLWE = 0;
		delayms(1);
		
		HLDU = 1;
		P0 = table[3];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xfb; //1111 1011
		HLWE = 0;
		delayms(1);
		
		HLDU = 1;
		P0 = table[4];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xf7; //1111 0111
		HLWE = 0;
		delayms(1);
		
		HLDU = 1;
		P0 = table[5];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xef; //1110 1111
		HLWE = 0;
		delayms(1);
		
		HLDU = 1;
		P0 = table[6];
		HLDU = 0;
		P0 = 0xff;
		HLWE = 1;
		P0 = 0xdf; //1101 1111
		HLWE = 0;
		delayms(1);
	}
}
