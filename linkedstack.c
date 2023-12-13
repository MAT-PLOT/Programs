 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
   int data;
   struct node*next;
 };
 struct node*top=0;
 void push()
 {
   int x;
   printf("Enter the element to be pushed:");
   scanf("%d",&x);
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=x;
   newnode->next=top;
   top=newnode;
 }
 void display()
 {
    struct node*temp;
    temp=top;
    if(top==0)
    {
       printf("Linked list is empty");
    }
    else
    {
        printf("Elements are:\n");
        while(temp!=0)
        {
           printf("%d",temp->data);
           temp=temp->next;
         }
     }
}
void pop()
{
    struct node*temp;
    temp=top;
    if(top==0)
    {
        printf("Linked list is empty");
    }
    else
    {
         printf("The popped elemenet is:%d",top->data);
         top=top->next;
     }
}
int search(struct node*top,int key)
{
  int pos=1;
  while(top!=NULL)
  {
   if(key==top->data)
    {
       return pos;
    }
    top=top->next;
    pos++;
   }
   return -1;
}
 
void main()
{
   int ch,pos,key;
   do
   {
     printf("\n1.Push\n2.Display\n3.Pop\n4.search\n5.exit\n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
     
        case 1:
              push();
              break;
        case 2:
               display();
               break;
        case 3:
               pop();
               break;
        case 4:
              printf("enter the value to be search:");
              scanf("%d",&key);
              pos=search(top,key);
              if(pos!=1)
              {
                printf("%d found at position %d in the stack.\n",key,pos);
               }
               else
               {
                  printf("%d not found in the stack.\n",key);
               }
               break;
        default:
                printf("Invalid choice");
       }
     }while(ch!=5);
}
