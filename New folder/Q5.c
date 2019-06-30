/*sum of digits of number*/
#include<stdio.h>
int main()
{
  int a,sum=0,b;
  printf("enter a digit");
  scanf("%d",&a);
  while(a!=0)
    {
	  b=a%10;
	  sum=sum+b;
	  a=a/10;
	}
  printf("The sum of digits of given number is=%d",sum);
  return 0;
}
	
  

