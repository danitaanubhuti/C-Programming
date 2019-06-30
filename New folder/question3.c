#include<stdio.h>
int main()
{
  char ch;
	printf("Enter a Character");
	scanf("%c",&ch);
	
	if(((ch>=65) && (ch<=90))|| ((ch>=97) && (ch<=122)))
	{
		switch(ch)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': printf("The character is a Vowel");
					  break;
			default : printf("The Character is a Constant");
		}
		
	}
	else
	{
		printf("Enterered Charcter is not a Character");
	}
	return 0;
}

