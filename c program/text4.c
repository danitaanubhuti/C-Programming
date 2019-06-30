/*arthematic operators*/
#include<stdio.h>
int main(void)
{
  int a,b;
  char op;
  float result;
  printf("enter an operator");
  scanf("%c",&op);
  printf("enter two operand");
  scanf("%d%d",&a,&b);
  switch(op)
  	{
		case '+': result=a+b;
				  printf("Addition=%f",result);	  
				  break; 
		case '-': result=a-b;
				  printf("Substraction=%f",result);
				  break;
	    case '*': result=a*b;
				  printf("Multiplication=%f",result);
				  break;
		case '/': result=(float)a/b;
				  printf("division=%f",result);
				  break;
	    case '%': result=a%b;
				  printf("Remainder=%f",result);
				  break;	
		default :printf("ERROR!");
		
	}
   return 0;  	  	    
}

