/*find root of ax^2+bx+c*=0*/
#include<stdio.h>
int main(void)
{
  int a,b,c;
  int discriment;
  printf("enter three numbers");
  scanf("\n%d%d%d",&a,&b,&c);
  discriment=((b*b)-(4*a*c));
  printf("a=%d,b=%d,c=%d",a,b,c);
  printf("the value of discriment=%d",discriment);
  	if(discriment==0)
	printf("\nthe roots are real and equal");
	else if(discriment>>0)
	printf("\nthe roots are real and distinct");
	else
	printf("\nthe roots are imaginary");
return 0;
}

