#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
struct node *head, *newnode,*temp,*tail;
void createdll()
{
  struct node *newnode;
  head=0;
  int choice=1;
  while(choice==1)
  {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("Enter data:");
     scanf("%d",&newnode->data);
     newnode->prev=0;
     newnode->next=0;
     if(head==0)
     {
        head=tail=newnode;
      }
      else
      {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
       }
       printf("Do you want to continue:");
       scanf("%d",&choice);
    }
}
void insertbegning()
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter Data:");
   scanf("%d",&newnode->data);
   newnode->prev=0;
   newnode->next=0;
   head->prev=newnode;
   newnode->next=head;
   head=newnode;
}
void insertend()
{
  struct node*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter Data:");
  scanf("%d",&newnode->data);
  newnode->prev=0;
  newnode->next=0;
  tail->next=newnode;
  newnode->prev=tail;
  tail=newnode;
}
int getlength()
{
  int count=0;
  temp=head;
  while(temp!=0)
  {
     count++;
     temp=temp->next;
   }
   return count;
}
void insertatpos()
{
   int pos,i=1;
   printf("Enter position:");
   scanf("%d",&pos);
   int l=getlength();
   if(pos<1||(pos>(l+1)))
   {
     printf("Invalid position");
   }
   else if(pos==1)
   {
     insertbegning();
   }
   else if(pos==(l+1))
   {
     insertend();
   }
   else
   {
      struct node*newnode;
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("Enter data:");
      scanf("%d",&newnode->data);
      temp=head;
      while(i<pos-1)
      {
         temp=temp->next;
         i++;
      }
      newnode->prev=temp;
      newnode->next=temp->next;
      temp->next=newnode;
      newnode->next->prev=newnode;
    }
 }
 void deletebegining()
 {
   if(head==0)
   {
     printf("List is empty");
   }
   else
     {
       temp=head;
       head=head->next;
       head->prev=0;
       tail->next=0;
       free(temp);
     }
 }
 void deleteend()
 {
   temp=tail;
   tail=temp->prev;
   tail->next=0;
   free(temp);
}

  void deletefrompos()
  {
    int i=1,pos;
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos>getlength())
    {
      printf("Invalid Position");
    }
    else if(pos==1)
    {
      deletebegining();
    }
    else if(pos==getlength())
    {
      deleteend();
    }
    else
    {
      temp=head;
      while(i<pos)
      {
        temp=temp->next;
        i++;
      }
      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      free(temp);
    }
  }
  
  void display()
  {
    struct node * temp;
    temp=head;
    while(temp!=0)
    {
      printf("%d",temp->data);
      temp=temp->next;
    }
    printf("\n");
  }
  
  void main()
  {
     int ch;
     do
     {
        printf("\n1. Create \n2.Insert at begining \n3.Insert at ending \n4.Insert at specified position \n5.Delete from begining        \n6.Delete from ending \n7.Delete from specified position \n8.Display \n9.Exit");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
          	createdll();
          	break;
          case 2:
          	insertbegning();
          	break;
          case 3:
          	insertend();
          	break;
          case 4:
          	insertatpos();
          	break;
          case 5:
          	deletebegining();
          	break;
          case 6:
          	deleteend();
          	break;
          case 7:
          	deletefrompos();
          	break;
          case 8:
          	display();
          	break;
          default:
          	printf("Invalid choice");
         }
      }
      while(ch!=10);
}
      
          	
          	
    
      
      
 
