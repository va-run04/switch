#include<stdio.h>
int main()
{
        int x;
    	printf("enter any number");
	    scanf("%d",&x);
	    switch(x)
	{
	    case 1:
	         	printf("burger");
	         	printf("\nprice:179");
	        	break;
     	case 2:	
		        printf("pizza");
		        printf("\nprice:239");
		        break;
		case 3:	
	         	printf("french fries");
	        	printf("\nprice:99");
	        	break;
		case 4:
		        printf("pasta");
	         	printf("\nprice:179");
	         	break;	
		 case 5:
	        	printf("sandwich");
	         	printf("\nprice:149");
	         	break;
	   default:
	   	printf("your choice is invalid");
	}

}
