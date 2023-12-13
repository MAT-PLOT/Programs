#include<stdio.h>
void main()
{
  int s1,s2,s3,k,i,j;
  printf("Enter the limit of first array:");
  scanf("%d",&s1);
  int arr1[s1];
  for(i=0;i<s1;i++)
  {
     printf("enter sorted elements of  first array:");
     scanf("%d",&arr1[i]);
  }
  printf("enter the limit of second array:");
  scanf("%d",&s2);
  int arr2[s2];
  for(j=0;j<s2;j++)
  {
      printf("enter sorted element of second array:");
      scanf("%d",&arr2[j]);
  }
  s3=s1+s2;
  int arr3[s3];
  i=j=k=0;
  while(i<s1&&j<s2)
  {
    if(arr1[i]<arr2[j])
    {
     arr3[k]=arr1[i];
     i++;
     k++;
    }
    else
    {
      arr3[k]=arr2[j];
      j++;
      k++;
     }
   }
   while(i<s1)
   {
    arr3[k++]=arr1[i++];
   }
   while(j<s2)
   {
    arr3[k++]=arr2[j++];
   }
   
   printf("after merging  two sorted arrays third array would be:");
   for(k=0;k<s3;k++)
   {
     printf("%d",arr3[k]);
    }
}
    
  
