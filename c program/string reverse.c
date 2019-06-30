/* Program to find the reverse of a String without using the Strrev Function*/
#include<stdio.h>
#include<string.h>
        
int main()
{
    int i,n,x;
    char str[20];
    printf("Enter the String to get reversed\n");
    gets(str);
    n=strlen(str);
	x=str;
    printf("\nReversed string is \n");
    for(i=n-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }
	if(x==str)
	printf("palindrome");
	else
	printf("error"); 
 	return 0;   
}

