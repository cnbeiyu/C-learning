#include<stdio.h>
#include<string.h>
char* mycpy(char*dst,const char*src)
{
	int idx = 0;
	while(src[idx]!='\0')
	{
		dst[idx]=src[idx];
		idx++;
	}
	dst[idx]='\0';
	return dst;
}
int main(int argc, char const *argv[])
{
	char s1[]="abc";
	char s2[]="S";
	//strcpy(s2,s1);
	mycpy(s2,s1);
	printf("%s\n",s2);
	//char *dst = (char*)malloc(strlen(src)+1)//+1因为有/0
	/* code *///返回值dst
	return 0;
}