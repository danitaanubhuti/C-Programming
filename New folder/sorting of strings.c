#include<stdio.h>
#include<string.h>
int main()
{
  	int i,j,n;
	char a[20][30],temp[30];
	printf("enter no of strings");
	scanf("%d",&n);
	printf("enter %d strings",n);
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
	  for(j=i;j<n;j++)
	  {
	   if(strcmp(a[i],a[j+1])>0)
	   {
	    strcpy(temp,a[i]);
		strcpy(a[i],a[j+1]);
		strcpy(a[j+1],temp);
		}
		
	 }
  }
	 printf("\n sorted strings");
	 for(i=0;i<n;i++)	  
	 printf("\n%s",a[i]);
	 return 0;
}
	

