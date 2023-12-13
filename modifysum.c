#include<stdio.h>
int add(int x,float y)
{
   return(x+y);
}
void main()
{
  int a,b;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  printf("The sum is %d",add(a,b));
}
