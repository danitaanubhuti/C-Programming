#include<stdio.h>
int main()
{
 int a,b,c,d;
 printf("enter four distict numbers");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b)
   {
     if((a>d)&&(a>c))
	 printf("a is greatest");
	 else if((c>d)&&(c>b))
	 printf("c is greatest");
	 else if(d>b)
	 printf("d is greatest");
	 else
	 printf("b is greatest");
   }
  else
   {
     if((b>d)&&(b>c))
	 printf("b is the greatest");
	 else if((c>d)&&(c>a))
	 printf("c is the greatest");
	 else if(d>a)
	 printf("d is the grestest");
	 else
	 printf("a is the greatest");
   }
  return 0;
}

