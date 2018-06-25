#include<stdio.h>
int main(int argc, char const *argv[])
{
	// char a[][10]={"ss"}; 
	int i;
	for(i=0;i<argc;i++)
	{
		printf("%d:%s\n",i,argv[i] );//argv存储了命令行后跟随的命令，argv[0]固定为路径
	}
	return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	// char a[][10]={"ss"}; 
	int i;
	char *a;
		for(i=0;i<argc;i++)
	{
		printf("%d:%s\n",i,argv[i] );//argv存储了命令行后跟随的命令，argv[0]固定为路径
	}
	//printf("%s\n",argv[1]);
	//printf("%d\n",strcmp(argv[1],"help"));
	a=argv[1];
	printf("a:%s\n",a );
	if ((strcmp(argv[1],"help"))==0)
	{
		printf("you need help\n" );
	}
	return 0;
}
*/