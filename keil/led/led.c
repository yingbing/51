#include<reg52.h>
void delay(unsigned int t) //0-65535
{
while(--t);
}
void main()
{
    unsigned char q;//0-255
		P1=0xfe;//1111 1110  1111 1101  1111 1011
		while(1)
		{
			 for(q=0;q<8;q++)
			 {
				delay(8000);
				P1<<=1;
				P1=P1|0X01; //0000 0001
			 } 
			 P1=0xfe;
		}
}
