//c语言中没有直接的方式一次scanf一个结构
//方法一：
//在输入函数中创建一个临时结构变量 把这个结构返回
#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct point getStruct(void);
void output(struct point);

int main(int argc, char const *argv[])
{
	struct point y = {0, 0};
	y = getStruct();
	output(y);
	return 0;
}
struct point getStruct(void)
{
	struct point p;//一定需要定义一个临时变量，c语言只能传值，不能传结构
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	printf("%d,%d\n", p.x, p.y );
	return p;
}
void output(struct point p)
{
	printf("%d,%d\n", p.x, p.y );
}
//方法二：
//用指针传结构
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
