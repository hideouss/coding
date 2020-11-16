#include<stdio.h>
#include<stdlib.h>

union person_info
{
	int id;
	float net;
};

int main()
{
	union person_info* a;
		a = (union person_info*)
			malloc(sizeof(union person_info));
  a->id = 01;
	a->net = 3.14;
  printf("%d %.1f\n", a->id,a->net);

	return 0;
}
