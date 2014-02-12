/*Program to print the given number in linked list*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
struct node
 {
  struct node *p;
  int data;
  }*q,*t;
printf("Enter a Number:");
scanf("%d",&a);
p=NULL;
while(a!=0)
{
 q=a%10;
 t=(struct node *)malloc(sizeof(struct node));
 t->data=q;
 t->p=q;
 q=t;
 a=a/10;
}
while(t!=NULL)
{
 printf("%d",t->data);
 if(t->next!=NULL)
 printf("->");
 t=t->next;
 }
}

