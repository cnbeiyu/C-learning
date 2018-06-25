#include<stdio.h>

int main(int argc, char *argv[])
{
	int ch,a;
	// ch=getc;har();
	// putchar(ch);
	while ((ch=getchar())!='S')
	{
		putchar(ch);
	}
	a=ch++;
	printf("EOF\n");
	printf("xx");
	printf("a=%d\n",a );
	printf("ch=%d\n",ch );
	printf("\nargc=%d\n", argc);
	printf("\n%s\n",argv[0]);
	printf("%s\n",argv[1]);
	///printf("%s\n",argv[2]);
	return 0;
}