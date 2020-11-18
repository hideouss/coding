#include<stdio.h>

int main()
{
	char *p;
	p = "hi";
	printf("%s\n", *&*&*&*&*&p);
	return 0;
}
