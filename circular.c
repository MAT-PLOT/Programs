#include<stdio.h>
#include<stdlib.h>
int queue[20],n;
int front=-1;
int rear=-1;
void enqueue()
{
   int x;
   if(((rear+1)%n)==front)
   {
      printf("Queue is full");
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
       rear=(rear+1)%n;
       queue[rear]=x;
     }
    }
}
void dequeue()
{
  if(front==-1 && rear==-1 )
  {
   printf("queue is empty");
  }
  else if(front==rear)
  {
     printf("\n  Dequed element is %d and now queue is empty",queue[front]);
     
  }
  else
  {
    printf(" dequeued element is %d",queue[front]);
    front=(front+1)%n;
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
      printf(" element in queue is:");
      for(int i=front;i!=rear;i=(i+1)%n)
      {
         printf("%d\t",queue[i]);
        
      }
      printf("%d",queue[rear]);
    }
}
      
void main()
{  
 
  
  int ch;
  printf("Enter the size of  circular queue:");
  scanf("%d",&n);
  do
  {
   
   printf("\n1.insertion\n2.display\n3.deletion\n4.exit");
   printf("Enter your choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:
            enqueue();
            break;
      case 2:
            display();
            break;
      case 3:
            dequeue();
            break;
       
     default:
            printf("Invalid choice");
    }
   }while(ch!=4);
    
}
  

     
