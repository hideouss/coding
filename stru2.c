#include<stdio.h>

struct student{
	char firstname[64];
	char lastname[64];
	char id[64];
	int score;
};

struct student getdetail(void);
void displaydetail(struct student std);

int main()
{
	struct student stdarr[3];
	int i;
	for(i=0; i<3; i++)
	{
		printf("%d\n", (i+1));
		stdarr[i] = getdetail();
  }

  for(i=0; i<3; i++)
	{
		printf("%d\n", (i+1));
		displaydetail(stdarr[i]);
	}

	return 0;
}


struct student getdetail(void)
{
  struct student std;
	scanf("%s %s %s %d", std.firstname,std.lastname,std.id,&std.score);

	return std;
}

void displaydetail(struct student std)
{
	printf("%s\n %s\n %s\n %d\n", std.firstname,std.lastname,std.id,std.score);
}















