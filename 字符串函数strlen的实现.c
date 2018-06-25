#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mylen(const char*s)//mylen()=strlen()
{
	int idx=0;
	while(s[idx]!='\0')
	{
		idx++;
	}
	return idx;
}

int main()
{
	char line[]="hello";
	printf("strlen=%d\n",mylen(line));
	printf("strlen=%d\n",sizeof(line));//多了'\0'
	char src[]="hello";
	char*dst = (char*)malloc(strlen(src)+1);
	strcpy(dst,src);

}