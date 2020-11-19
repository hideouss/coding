#include<stdio.h>

void fun(int);

int main()
{
	void (*fun_ptr)(int) = fun; // =&fun
	fun_ptr(24);   //equal (*fun_ptr)(10)

	return 0;
}

void fun(int x)
{
	printf("%d\n", x);
}
