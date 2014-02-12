/*program to find what type of triangle when vertices are given*/
#include<math.h>
#include<stdio.h>
void main()
{
 int xa,xb,ya,yb,za,zb,a,b,c;
 printf("enter x1 x2 x3 co-ordinates");
 scanf("%d%d%d%d%d%d",&xa,&xb,&ya,&yb,&za,&zb);
 a=sqrt(pow(xa-ya,2)+(xb-yb,2));
 b=sqrt(pow(ya-za,2)+(yb-zb,2));
 c=sqrt(pow(za-xa,2)+(zb-xb,2));
  if(a+b>c || b+c>a || c+a>b)
   {
    if(b*b+c*c==a*a || c*c+a*a==b*b || a*a+b*b==c*c)
      printf("given vertices form a ryt angle triangle");
    if(a*a+b*b<c*c || b*b+c*c<a*a || c*c+a*a<b*b)
      printf("obtuse triangle");
    else if(a*a==b*b==c*c)
      printf("equilateral triangle");
    else if(a*a+b*b >c*c || b*b+c*c>a*a || c*c+a*a>b*b)
     printf("acute triangle");
   }
  else
 printf("givem vertices does not form a triangle");
}
