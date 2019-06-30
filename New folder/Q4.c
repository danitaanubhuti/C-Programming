#include<stdio.h>
int main()
{
  int a,b;
  char op;
  float result;
  printf("enetr a operator");
  scanf("%c",&op);
  printf("enetr two operands");
  scanf("%d%d",&a,&b);
  switch(op)
  {
    case '+':result=a+b;
	         printf("sum=%f",result);
			 break;
	case '-':result=a-b;
	         printf("sub=%f",result);
			 break;
	case '*':result=a*b;
	         printf("mul=%f",result);
			 break;
	case '/':result=(float)a/b;
	         printf("div=%f",result);
			 break;
	case '%':result=a%b;
	         printf("rem=%f",result);
			 break;
    default: printf("ERROR");	 	 	  
  }
  return 0;
}
			 
	
			 
	
  

  

