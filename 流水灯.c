#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
void delayms(uint);
uchar temp;
void main()
{
	temp = 0xfc;
	while (1)
	{
		P1 = temp;
		delayms(500);
		temp = _crol_(temp, 1);
	}
	//return 0;
}
void delayms(uint xms)
{
	uint i, j;
	for (i = xms; i > 0; i--)
	{
		for (j = 110; j > 0; j--);
	}
}
