#include<stdio.h>
#include<string.h>
int mycmp(const char*s1,const char*s2)
{
	int idx=0;
	while(1)
	{
		if(s1[idx]!=s2[idx])
		{
			break;
		}
		else if (s1[idx]=='\0')
		{
			break;
		}
		idx++;

	}
	return s1[idx]-s2[idx];
}
int main(int argc, char const *argv[])
{
	char s1[]="abc";
	char s2[]="Wc";
	printf("%d\n",*s1==*s2);//数组是地址 无法比较
	printf("strcmp ret:%d\n",strcmp("abc","Wc"));//s1==s2 返回0，s1>s2 返回1，s1<s2返回-1
	printf("%d\n",'a'-'A');


	return 0;
}
