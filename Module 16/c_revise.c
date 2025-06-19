#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
  int data;
  struct node* next;
};
typedef struct node *NODE;

NODE createnode(int data){
  NODE temp=(NODE)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=NULL;
  return temp;
}

NODE insert_begin(int data, NODE start){
  NODE temp= createnode(data);
  if(start==NULL){
    return temp;
  }
  temp->next=start;
  return temp;
}

NODE delete_begin(NODE start){
  if(start==NULL){
    return NULL; 
  }
  NODE temp=start;
  start=start->next;
  printf("THe Element Deleted is : %d",temp->data);
  free(temp);
  return start;
}

void display(NODE start){
  if(start==NULL){
    printf("The list is Empty !!!");
  }
  else{
    printf("The list Contents are: ");
    while(start!=NULL){
      printf("%d ",start->data);
      start=start->next;
    }
  }
}

int main(){
  NODE start=NULL;
    int ch, item;
  for(;;){
    printf("\n1. Insert: ");
    printf("\n2. Delete: ");
    printf("\n3. Display: ");
    printf("\n4. Exit: ");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
      printf("Enter the Number to add: ");
      scanf("%d",&item);
      start=insert_begin(item,start);
      break;

    case 2:
      start=delete_begin(start);
      break;

    case 3:
      display(start);
      break;

    case 4:
      return 0;

    default:
      printf("\nInvalid Input, Enter the choice Between 1 to 3: ");
      break;
    }
  }
  return 0;
}