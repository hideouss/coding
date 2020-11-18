#include<stdio.h>

struct person{
	char name[30];
	int age;
}per, *ptrper;

int main()
{
  struct person per = {"z", 24};
//	struct person per;
	//struct person *ptrper;
	ptrper = &per;
	//scanf("%s", ptrper->name);
  //scanf("%d", &ptrper->age);
	printf("%s %d\n", ptrper->name,ptrper->age);

	return 0;
}
