#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
int queue[25],n;
void enqueue()
{
 int x;
 if(rear==n-1)
 {
    printf("queue is full");
 }
 else 
 { 
    printf("Enter the element to be inserted:");
    scanf("%d",&x);
    if(front==-1 && rear==-1)
    {
     front=rear=0;
     queue[rear]=x;
    }
   else
   {
    rear=rear+1;
    queue[rear]=x;
   }
}
}
void dequeue()
{
  if(front==-1 && rear==-1)
  {
    printf("queue is empty");
  }
  else if(front==rear)
  {
    front=rear=-1;
  }
  else
  {
    printf("%d \n",queue[front]);
    front=front+1;
  }
}
void display()
{
  if(front==-1 && rear==-1)
  {
    printf("queue is empty");
  }
  else
  {
    for(int i=front;i<rear+1;i++)
    {
      printf("%d \n",queue[i]);
    }
  }
}
void search()
{
 int i;
 int search;
 printf("enter the element to be search:");
 scanf("%d",&search);
 for(i=0;i<n;i++)
 {
   if(search==queue[i])
   {
      break;
    }
  }
  if(i<n)
  {
    printf("Element found in %d index\n",i);
  }
  else
  {
     printf("element not found\n");
   }
 }
void main()
{ 
 int ch;
 printf("Enter the number of elemnets:");
 scanf("%d",&n);
 do
 {
 printf("queue operations are:\n1.enqueue\n2.dequeue\n3.display\n4.search\n5.exit\n");
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
   case 1:
          enqueue();
          break;
   case 2:
         dequeue();
         break;
   case 3:
         display();
         break;
    case 4:
           search();
           break;
   default:
          printf("Invalid choice!");
  }
 }while(ch!=5);
}
