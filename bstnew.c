#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node*left,*right;
  int data;
}*root,*newnode;
void create();
void insert(struct node*,struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);           
void create()
{
  int ele;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->left=NULL;
  newnode->right=NULL;
  printf("enter the data:");
  scanf("%d",&ele);
  newnode->data=ele;
  if(root==NULL)
  {
    root=newnode;
  }
  else
  {
    insert(root,newnode);
  }
}
void insert(struct node*root,struct node*newnode)
{
     if(newnode->data<root->data)
     {
        if(root->left==NULL)
              {
                root->left=newnode;
              }
              else
              {
                insert(root->left,newnode);
              }
     
     }
     else
     {
        if(root->right==NULL)
              {
                 root->right=newnode;
              }
              else
              {
                 insert(root->right,newnode);
              }
        
     }
        
}

 void inorder(struct node*temp)
   {
     if(temp!=NULL)
     {
       inorder(temp->left);
       printf("%d\t",temp->data);
       inorder(temp->right);
      }
    }
 void preorder(struct node*temp)
 {
    
   if(temp!=NULL)
    {
   printf("%d\t",temp->data);
   preorder(temp->left);
   preorder(temp->right);
   }
}
void postorder(struct node*temp)
{
    if(temp!=NULL)
    {
     
    postorder(temp->left);
    postorder(temp->right);
    printf("%d\t",temp->data);
    }
 }


void main()
{
   int choice,key;
   printf("\n1.insert and create\n2.inorder\n3.preorder\n4.postorder\n5.exit");
   while(1)
   {
      printf("\nenter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
         case 1:
                create();
                break;
         case 2:
                inorder(root);
                break;
          case 3:
                preorder(root);
                break;
           case 4:
                 postorder(root);
                 break;
           
          case 5:
               exit(0);
       }
    }
}
 
    
      
              
              
            
    

