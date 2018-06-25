/**********
枚举是用户定义的数据类型，关键字emum 主要用于定义排比的名字
emum 枚举类型名字（名字0，名字1，...，名字n）
枚举类型名字其实无所谓,大括号里的名字就是常量符号，
类型一定为int，值从0到n
定义枚举的意义就是给这些常量名字
***********/
#include<stdio.h>
enum COLOR {RED, YELLO, GREEN, NumCOLORS};
int main(int argc, char const *argv[])
{
	int color = -1;
	char*ColorNames[3] = {
		"red", "yellow", "green"
	};
	char*colorName = NULL;
	printf("输入你喜欢的颜色的代码");
	scanf("%d", &color);
	if (color >= 0 && color < 3)
	{
		colorName = ColorNames[color];
	}
	else
	{
		colorName = "unknown";
	}

	printf("你喜欢的颜色是%s\n", colorName);
	return 0;
}