\#include<stdio.h>

/*int fun()
{
	static int count = 0;
  count++;
	
  return count;
}

int main()
{
	printf("%d ", fun());
	printf("%d ", fun());

	return 0;
}*/

int main()
{
	static int x;
  int y;
	printf("%d %d", x, y);
  
  return 0;
}
