#include <reg52.h>
#include "c52.h"

void main()
{
	c52_init();
	
	HLDU = 1;
	P0 = 0x6;
	HLDU = 0;
	
	HLWE = 1;
	P0 = 0xc0;
	HLWE = 0;
	
	while(1);
}
