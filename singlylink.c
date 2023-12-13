#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*next;
}*newnode,*head,*temp,*d;
void create()
{
  char ch;
  int value;
  do
  {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
       head=newnode;
       temp=newnode;
    }
    else
    {
       temp->next=newnode;
       temp=temp->next;
     }
    printf("Do you want to add more nodes(Y/N)");
    scanf(" %c",&ch);
   }while(ch=='y');
}
void display()
{
  temp=head;
  while(temp!=NULL)
  {
     printf("%d",temp->data);
     temp=temp->next;
  }
}
void deletebeg()
{
  temp=head;
  printf("Deleted node is %d",temp->data);
  head=head->next;
  temp->next=NULL;
  free(temp);
}
void search()
{
  int key;
  int flag=0;
  printf("\nenter the key value to search:");
  scanf("%d",&key);
  temp=head;
  while(temp!=NULL)
  {
    if(key==temp->data)
    {
        flag=1;
        break;
    }
    temp=temp->next;
  }
  if(flag==1)
  {
     printf("key element is found");
  }
  else
  {
     printf("key element is not found");
  }
}
void main()
{
  int choice;
  printf("\n1.create\n2.display\n3.deletebegining\n4.search\n5.exit\n");
  do
  {
     printf("\nEnter Your choice:" );
     scanf("%d",&choice);
     switch(choice)
     {
       case 1:
             create();
             break;
       case 2:
              display();
              break;
       case 3:
              deletebeg();
              break;
       case 4:
              search();
              break;
       default:
              printf("Invalid choice!");
      }
     }while(choice!=5);
}  
    
