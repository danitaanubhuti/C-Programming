/*FACTORIAL OF NUMBER*/
#include <stdio.h>
int main()	
{

	int i,num,fact=1;
	
	printf(" Enter the number to find Factorial");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		
	}
	printf(" The factorial of %d is %d",num,fact);
	
	
	return 0;
}

