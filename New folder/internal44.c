#include<stdio.h>
int fact(int i, int f);
int main()
{
  	int i,f=1;
	printf("enter no");
	scanf("%d",&i);
	for(i;i>0;i++)
	f=fact(i,f);
	printf("factorial=%d",f);
	return 0;
}
int fact(int i, int f)
{
 f=f*i;
 return 0;
}

