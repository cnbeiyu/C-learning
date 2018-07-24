#include <stdio.h>
// void f(int i)
// {
// 	printf("in f,%d\n", i);
// }

// void g(int i)
// {
// 	printf("in g,%d\n", i);
// }

// void h(int i)
// {
// 	printf("in h,%d\n", i);
// }

// int main(int argc, char const *argv[])
// {
// 	int i = 0;
// 	void(*fa[])(int) = {f, g, h};
// 	scanf("%d", &i);/	if (i >= 0 && i <= sizeof(fa) / sizeof(fa[0])) {
// 		(*fa[i])(i);
// 	}
// 	return 0;
// }

int plus(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

void cal(int (*f)(int, int))
{
	printf("%d\n", (*f)(2, 3));
}
void main(int argc, char const *argv[])
{
	cal(plus);
	cal(minus);
	return 0;
}