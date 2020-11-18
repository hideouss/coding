#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person{
	int age;
	char name[256];
	struct person *nest_ptr;
};

struct person *getperson()
{
	char p1name[5] = "alice";
	cahr p2name[4] ="tom";

	struct person *p1;
	struct person *p2;

  p2 = malloc(sizeof(struct person));
	strcpy(p2->name, p2name);
	p2->age = 24;
	p2->next_ptr = NULL;

	p1 = malloc(sizeof(struct person));
	strcpy(p1->name, p1name);
  p1->age = 25;
  p1->next_ptr = p2;

  return p1;
}

int main()
{
	struct person * tmp = getperson();

	print(tmp->name);
	printf("\n");
	printf(tmp->next_ptr->name);
	printf("\n");
	free(tmp);

	return 0;
}

















