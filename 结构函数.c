#include <stdio.h>
#include<stdbool.h>
// struct date
// {
// 	int month;
// 	int day;
// 	int year;
// };
// bool isleap(struct date d);
// int numberofdays(struct date d);

// int main(int argc, char const *argv[])
// {
// 	struct date today, tomorrow;
// 	printf("Enter today's date (dd mm yyyy):");
// 	scanf("%i %i %i" , &today.day, &today.month, &today.year);

// 	if (today.day != numberofdays(today))
// 	{
// 		tomorrow.day = today.day + 1;
// 		tomorrow.month = today.month;
// 		tomorrow.year = today.year;
// 	}
// 	else if (today.month == 12)
// 	{
// 		tomorrow.day = 1;
// 		tomorrow.month = 1;
// 		tomorrow.year = today.year + 1;
// 	}
// 	else
// 	{
// 		tomorrow.day = 1;
// 		tomorrow.month = today.month + 1;
// 		tomorrow.year = today.year;
// 	}
// 	printf("Tomorrow is %i-%i-%i\n", tomorrow.day, tomorrow.month, tomorrow.year);
// 	return 0;
// }
// int numberofdays(struct date d)
// {
// 	int days;
// 	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// 	if (d.month == 2 && isleap(d))
// 		days = 29;
// 	else
// 		days = daysPerMonth[d.month - 1];
// 	return days;
// }
// bool isleap(struct date d)
// {
// 	bool leap = false;
// 	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
// 	{
// 		leap = true;
// 	}
// 	return leap;
// }

// struct point
// {
// 	int x;
// 	int y;
// };
// void getstruct(struct point);
// void output(struct point);
// void main( )//getstruct函数只负责读入参数，之后的操作和结构无关，不能操作结构
// {	//传入函数的是外部结构的克隆体，而不是像数组一样的指针
// 	struct point y = {0, 0};
// 	getstruct(y);
// 	output(y);
// 	//啦 return 0;
// }++
// void getstruct(struct point p)
// {
// 	scanf("%d", &p.x);
// 	scanf("%d", &p.y);
// 	printf("%d %d\n", p.x, p.y);
// }
// void output(struct point p)
// {
// 	printf("%d %d\n", p.x, p.y);
// }
/******************
*****************/
struct point
{
	int x;
	int y;
};
struct point* getstruct(struct point*);
void output(struct point);
void print(const struct point *p);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	getstruct(&y);
	output(y);
	output(*getstruct(&y));
	print(getstruct(&y));
	return 0;
}
struct point* getstruct(struct point*p)
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	printf("%d %d\n", p->x, p->y);
	return p;

}
void output(struct point p)
{
	printf("%d %d\n", p.x, p.y);
}
void print(const struct point *p)
{
	printf("%d %d\n", p->x, p->y);
}

