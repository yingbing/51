#include <reg52.h>

#define uint unsigned int
#define uchar unsigned char
void delayms(uint ms);

void main()
{
	uchar init_p1, num = 0;
	init_p1 = 0xfe;
	
	while(1)
	{
		P1 = init_p1;
		delayms(500);
		init_p1=((init_p1>>7)|(init_p1<<1));
	}	
}

void delayms(uint ms)
{
	uint i,j;
	for(i=ms;i>0;i--)
		for(j=110;j>0;j--);
}
