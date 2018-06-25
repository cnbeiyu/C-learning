#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p = strchr(s, 'l');//寻找l
	char *t = (char*)malloc(strlen(p) + 1);
	strcpy(t, p);
	printf("t=%s\n", t);
	p = strchr(p + 1, 'l'); //寻找第二个l
	printf("p=%s\n", p );
	/******
	char c = *p;
	*p = '\0';
	t = (char*)malloc(strlen(s) + 1);
	strcpy(t, s);
	printf("%s\n", t);
	******/输出llo前的字符串
	free(t);
	return 0;
}
//函数strstr(char*s1,char*s1)字符串中寻找字符串