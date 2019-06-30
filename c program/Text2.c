#include<stdio.h>
int main(void)
{
int ch;
printf("enter a letter");
scanf("%d",&ch);
if (ch>=65 && ch<=90)
printf("it is a capital letter");
else
printf("it is a lowercase letter");
return 0;
}

