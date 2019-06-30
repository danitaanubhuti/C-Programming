#include<stdio.h>
int main()
{
  char ch;
  printf("enter a charecter");
  scanf("%c",&ch);
  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
   {
     switch(ch)
	 {
	   Case 'a':
	   Case 'e':
	   Case 'i':
	   Case 'o':
	   Case 'u':
	   Case 'A':
	   Case 'E':
	   Case 'I':
	   Case 'O':
	   Case 'U': printf("it is a vowel");
	             break;
	   default:printf("it a consonant");
	 }
	}
	
  else
       printf("it is not an alphabet");
  return 0;
}
	   	      
	   

