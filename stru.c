#include<stdio.h>
#include<string.h>

struct books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printbook(struct books *);

int main()
{
	struct books book1;
  strcpy(book1.title, "c langage");
  strcpy(book1.author,"z");
  printbook(&book1);

	return 0;
}

void printbook(struct books *book)
{
	printf("%s\n", book->title);
  printf("%s\n", book->author);
}
