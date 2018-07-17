#include <stdio.h>
typedef struct ADate
{
	int month;
	int day;
	int year;
} Date; //Date是ADate新的名字，Date=struct ADate
//Date d={1,2,3};

typedef union
{
	int i;
	unsigned char ch[sizeof(int)];
} CHI;
int main(int argc, char const *argv[])
{
	CHI chi;
	int n;
	chi.i = 1234;
	for (n = 0; n < sizeof(int); n++)
	{
		printf("%02hhx\n", chi.ch[n]);
	}
	return 0;
}