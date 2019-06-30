/*ARMSTRONG NUMBER*/
#include<stdio.h>
int main()
{
  int n,r,k,m,sum=0;
  printf("enter a number");
  scanf("%d",&n);
  m=n;
  while(n>0)
  {
    r=n%10;
	k=(r*r*r);
	sum=sum+k;
	n=n/10;
  }
  if(sum==m)
    printf("it is an armstrong number");
  else
    printf("it is not an armstong number");
  return 0;
}

