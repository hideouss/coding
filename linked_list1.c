//implement generic linked list in c
//void pointer could point to any data type     all types of pointers is same
#include"stdio.h"
#include"stdlib.h"

//a linked list node
struct Node
{
  void *data; //any data type can be stored in this node
  struct Node *next;
};

/*functin to add a node at the beginnig of liked list
expects a pointer to the data to be added and size of the data type*/
void push(struct Node** head_ref, void *new_data, size_t data_size)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); //allocate memory for node
  new_node->data = malloc(data_size);
  new_node->next = (*head_ref);
  //copy contents of new_data to newly allocated memory
  //assumption:char takes 1 byte
  int i;
  for(i=0; i<data_size; i++)
    *(char *)(new_node->data + i) = *(char *)(new_data + i);
  //change head pointer as new node is added at beginnig
  (*head_ref) = new_node;
}

/*function to print nodes in a given linked list   f pitr is used to access function to be used
for printing current node data.
note that different data types need different specifier in printf()*/
void printList(struct Node *node, void (*fptr)(void *))
{
  while (node != NULL)
  {
    (*fptr)(node->data);
    node = node->next;
  }
}

//function to print an integer
void printInt(void *n)
{
  printf(" %d", *(int *)n);
}

//function to print a float
void printFloat(void *f)
{
  printf(" %f", *(float *)f);
}

int main()
{
  struct Node *start = NULL;
  //create and print an int linked list
  unsigned int_size = sizeof(int);
  int arr[] = {10, 20, 30, 40, 50}, i;
  for (i=4; i>=0; i--)
    push(&start, &arr[i], int_size);
  printf("create integer linked list is \n");
  printList(start, printInt);
  //create and print a float linked list
  unsigned float_size = sizeof(float);
  start = NULL;
  float arr2[] = {10.1, 20.2, 30.3, 40.4, 50.5};
  for (i=4; i>=0; i--)
    push(&start, &arr2[i], float_size);
  printf("\n\ncreated float linked list is \n");
  printList(start, printFloat);
  return 0;
}





