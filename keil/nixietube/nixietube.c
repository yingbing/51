#include <reg52.h>
sbit duxuan=P2^1;
sbit weixuan=P2^2;

void main()
{
	while(1)
	{
		weixuan=1;
		P0=0xfe;
		weixuan=0;
		
		duxuan=1;
		P0=0x06;
		duxuan=0;
	}
}