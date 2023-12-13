#include<stdio.h>
#include<stdlib.h>
int n,stack[15];
int top=-1;
void push()
{
  int x;

  if(top>=n-1)
  {
    printf("Stack is overflow");
   }
   else
   {
     printf("Enter element to be pushed:");
     scanf("%d",&x);
     top=top+1;
     stack[top]=x;
    }
}
void pop()
{
  if(top==-1)
  {
    printf("stack is empty");
  }
  else
  {
     printf("Popped element is %d \n",stack[top]);
     top=top-1;
   }
}
void display()
{
   if(top==-1)
   {
     printf("Stack is empty");
   }
   else
   {
     printf("Elements inside the stack is:\n");
     for(int i=top;i>=0;i--)
     {
       printf("%d\n",stack[i]);
     }
   }
}
void peek()
{
  printf("%d",stack[top]);
}
void main()
{
  printf("Enter the limit of stack:");
  scanf("%d",&n);
  int ch;
  do
  {
  
    printf("\noperations are:\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
              push();
              break;
       case 2:
              pop();
              break;
        case 3:
              display();
              break;
        case 4: 
              peek();
              break;
              
        default:
               printf("Invalid choice");
     }
    }while(ch!=5);
}
    
  
     
     
     
  
