#include "array.h"
#include<stdlib.h>
#include<stdio.h>
Array array_create(int init_size)
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int) * a.size);
	return a;
}
// Array* array_create(Array* a, int init_size)
// {
// 	a->size = init_size;
// 	a->array = (int*)malloc(sizeof(int) * a->size);
// 	return a;
// }
void array_free(Array*a)
{
	free(a->array);
	a->size = 0;
	a->array = NULL;
}
int array_size(const Array *a)
{
	return a->size;
}
int*array_at(Array *a, int index)
{
	return &(a->array[index]);
}
int main(int argc, char const *argv[])
{
	Array a = array_create(100);
	printf("%d\n", array_size(&a));
	*array_at(&a, 0) = 10;
	printf("%d\n", *array_at(&a, 0));
	return 0;
}











