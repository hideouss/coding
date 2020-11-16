#include<stdio.h>

int main()
{
	int arr[3] = {100,200,300};
  int *ptr;
  ptr = arr;
  for(int i=0; i<3; i++)
  {
		printf("%d %p\n", *ptr, ptr);
		ptr++;
	}
/*	int var = 10;
	int *ptr = &var;
  printf("%d %p\n", *ptr,ptr);
  *ptr = 20;
  printf("%d %p\n", *ptr,ptr);  */
/*	int x;

	printf("%p", &x);   */

  return 0;
}
