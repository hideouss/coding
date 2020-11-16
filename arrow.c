#include<stdio.h>
#include<stdlib.h>
struct person_info
{
	char *name;
	char *level;
};

int main()
{
	struct person_info* a;
  a = (struct person_info*)
		malloc(sizeof(struct person_info));

	a->name = "z";
  a->level = "a";

	printf("%s %s\n", a->name,a->level);

	return 0;
}
