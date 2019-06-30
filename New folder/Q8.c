#include<stdio.h>
int main()
{
  float s1,s2,s3,avg;
  printf("enter three subject marks");
  scanf("%f%f%f",&s1,&s2,&s3);
  avg=(s1+s2+s3)/3;
  if(avg>=90)
  printf("o");
  else if(avg>=80)
  printf("a+");
  else if(avg>=70)
  printf("a");
  else if(avg>=60)
  printf("b");
  else if(avg>=50)
  printf("c");
  else if(avg>=40)
  printf("d");
  else
  printf("fail");
  return 0;
}
  
  

