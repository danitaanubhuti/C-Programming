/*a program to check entered number is palindrome or not*/
#include<stdio.h>
int main()
{
  int a,n,reverse=0,b;
  printf("enter a numeber");
  scanf("%d",&n);
  b=n;
  while(n!=0)
  {
    	a=n%10;
  		reverse=(reverse*10)+a;
 		n=n/10;
  }
  if(reverse==b)
     printf("entered number is palindrome");
  else
  	 printf("it is not a palindrome");
  return 0;
 }

