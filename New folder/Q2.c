#include<stdio.h>
int main()
{
  char ch;
  printf("enter a charecter");
  scanf("%c",&ch);
  	if((ch>=65)&&(ch<=90))
	{
	   ch=ch+32;
	   printf("CHARECTER=%c",ch);
	 }
	else if((ch>=97)&&(ch<=122))
    {
	   ch=ch-32;
	   printf("CHARECTER=%c",ch);
	}
	else
	 {
	   printf("it is not an alphabet");
	  }
  return 0;
 }
	 

