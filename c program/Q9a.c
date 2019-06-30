#include <stdio.h>

int main()
{

	int x,y;
	
	printf("/nEnter two numbers to be swapped");
	scanf("%d%d",&x,&y);
	printf("/nBefore Swappping :\n x=%d,\ny=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("After Swappping :\n x=%d,\ny=%d",x,y);
	
	
	return 0;
}

