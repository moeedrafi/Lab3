#include<stdio.h> 
#include<conio.h>
//lab Task 3.4
int main ()
{ 
    int per;
    printf("Enter your Score : ");
    scanf("%d",&per);
    
	switch(per)
    {
	
	
	   {
        case 85 ... 100:
    	printf("Student has A Grade");
		break;		
	   }
	   {
		case 72 ... 84:
		printf("Student has B Grade");
		break;
	   }
	   {
		case 60 ... 71:
		printf("Student has C Grade");
		break;
	   }
	   { 
		case 50 ... 59:
		printf("Student has D Grade");
		break;
	   }
	   { 
		case 0 ... 49:
		printf("Student has F Grade");
		break;
	   }
    } //switch
} //main 	 
