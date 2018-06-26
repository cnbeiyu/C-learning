#include<stdio.h>
struct date {//声明结构 注意括号外加;
	int month;
	int day;
	int year;
};
/***
struct{
	int month;
	int day;
	int year;
}today;定义一个仅供today使用的结构体
struct date{
	int month;
	int day;
	int year;
}today;定义一个date结构体 同时定义today结构变量
***/
int main(int argc, char const *argv[])
{

	struct date today;//等于 struct date today={06,25,2018};
	//等于 struct date today={.day=25,.year=2018};
	today.month = 06;
	today.day = 25;
	today.year = 2018;
	printf("Today is %i-%i-%i.\n", today.month, today.day, today.year);
	struct date tomorrow;
	tomorrow = (struct date) {1, 1, 1};
	struct date *pDate = &today;//结构变量名字便不是结构变量地址，不能像数组一样直接使用，要加&
	return 0;
}
//嵌套结构
struct time {
	int hours;
	int minutes;
	int seconds;
};

struct date
{
	struct time month;
	struct time day;
};
struct date d, *dp;
dp = &d;
d.month.hours//等价于
dp->month.hours//等价于
//结构中指针用-> ，结构变量用.