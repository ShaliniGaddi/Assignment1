/*program to find the median of two sorted arrays*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int i=0,j=0,k=0,p,median;
int *a;
int *b=(int *)malloc(10*sizeof(int));
a=(int *)malloc(10*sizeof(int));
int *c=(int *)malloc(10*sizeof(int));
while(i<m && j<n)
{
  if(a[i]<=b[j])
   {
    c[k]=a[i];
    i++;
    k++;
   }
  else
  {
   c[k]=b[j];
   j++;
   k++;
  }
}
if(i>m)
{
 while(j<n)
  {
    c[k]=b[j];
    j++;
    k++;
  }
else if(j>n)
    {
      while(i<m)
      {
      c[k]=a[i];
      i++;
      k++;
     }
}
p=k/2;
median=c[p];
printf("%d is the median",median);
}
