#include<stdio.h>

static void staticfun(void){
	printf("text\n");
}

int main()
{
	staticfun();

	return 0;
}

