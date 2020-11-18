#include<stdio.h>

void swap(int*, int*);

int main()
{
	int a = 5,b=10;
	swap(&a,&b);
	printf("%d %d\n", a,b);

	return 0;
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
