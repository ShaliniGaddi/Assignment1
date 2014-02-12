/*program to find the most repeated element in an array*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
 int  i,j,m;
 int *a;
 int *b=(int *)malloc(10*sizeof(int));
 a=(int *)malloc(10*sizeof(int));
 printf("enter no of elements u want in array");
 gets(a);
 printf("enter array elements");
 gets(b);
 for(j=0;j<99;j++)
  {
   b[j]=0;
   }
 for(i=0;i<m;i++)
  {
   if(a[i]==a[i+1])
   {
     for(j=i;j<m;j++)
      {
      b[a[i]]++;
      }
   }
  }
 for(j=0;j<99;j++)
 {
  if(b[j]>b[j+1])
  {
   j++;
  }
 }
printf("most repeating element is %d", j);
printf("number of times it is repeating is %d",b[j]);
}
