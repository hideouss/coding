#include<stdio.h>

typedef char* ptr;  // scope rule   has semicolon
#define PTR char*   //no scope rule  no semicolon

int main()
{
  ptr a,b,c;
  PTR x,y,z;
  printf("%zu\n", sizeof(a));
	printf("%zu\n", sizeof(b));
	printf("%zu\n", sizeof(c));
  printf("%zu\n", sizeof(x));
  printf("%zu\n", sizeof(y));
  printf("%zu\n", sizeof(z));

  return 0;
}
