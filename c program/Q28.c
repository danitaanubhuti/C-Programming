#include <stdio.h>
int main()
{
  int a;
  printf("enter a day number");
  scanf("%d",&a);
    switch(a)
  	{
		case 1: printf("Monday");	
				  	break; 
		case 2: printf("tuesday");
				 	 break;
	    case 3: printf("Wednesday");
				 	 break;
		case 4: printf("Thursday");
				 	 break;
	    case 5: printf("Friday");
		   			break;
		case 6:printf ("Saturday");
		  	  	    break;
		case 7: printf("Sundy");
		            break;	  
		default:printf("ERROR!");
		        break;
					
	}
   return 0;  	  	    
}

