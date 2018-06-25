#include <stdio.h>

void swap(int *pa,int *pb);
void minmax(int a[],int len,int *min,int*max);
int divide(int a,int b,int *result);
int main()
{
	// int a=5;
	// int b=6;
	// swap(&a,&b);
	// printf("a=%d\nb=%d",a,b );
	// return 0;

	// int a[]={1,2,3,4,54,6,7,4,9};
	// int min,max;
	// minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	// printf("min=%d\nmax=%d", min,max);
	//return 0;

	// int a=5;
	// int b=2;
	// int c;
	// if(divide(a,b,&c))
	// {
	// 	printf("%d/%d=%d\n", a,b,c);
	// }
	// return 0;

	char ac[]={0,1,2,3,4,5,6,7,8,9};
	char *p=ac;
	printf("p=%p\n",p);
	printf("p+1=%p\n", p+1);
	printf("*p=%d\n",*p );
	char q=ac[0];
	printf("%p\n",q);
}
void swap(int *pa,int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
void minmax(int a[],int len,int *min,int*max)
{
	int i;
	*min=*max=a[0];
	for(i=0;i<len;i++)
	{
		if(a[i]<*min)
		{
			*min=a[i];
		}
		if(a[i]>*max)
		{
			*max=a[i];
		}
	}
}

int divide(int a,int b,int *result)
{
	int ret = 1;
	if(b == 0 )
	{
		ret = 0;
	}
	else
	{
		*result = a/b;
	}
	return ret;
}