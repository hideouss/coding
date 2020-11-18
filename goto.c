#include<stdio.h>

int main()
{
	int sum = 0;
	for (int i=0; i<=10; i++){
		sum += i;
		if (i==5){
				goto addtion;
		}
	}
	addtion:
	printf("%d", sum);

 return 0;
}


