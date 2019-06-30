#include<stdio.h>
int main(void)
{
 char ch;
  	 printf("enter a charecter");
  	 scanf("%c",&ch);
  if((ch>=90)&&(ch<=122))
  {
 	printf("\nit is an lowercase alphabet");
	ch=ch-32;   
	printf("\nthe uppercase of entered alphabet is=%c",ch);
   }
  else
  	printf("it is a upper case aplabet");
 return 0;
}

