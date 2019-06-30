/* program to print all the perfect numbers in the range n1 to n2*/
#include<stdio.h>
int main()
{
	int n1, n2, i = 1, sum = 0, remainder;
	printf("enter the range of number");
	scanf("%d%d",&n1,&n2);
	while (n1!=n2)
	{
		i = 1;
		sum = 0;
		while (i<=n1-1)
		{
			remainder= n1 % i;
			if (remainder==0)
			{
				sum=i+sum;
			}
			i++;
		}
		if (sum==n1)
			printf("%dis a perfect number\n",n1);
    	n1++;
	}
	return 0;
}

