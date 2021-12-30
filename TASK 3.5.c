#include<stdio.h>
#include<conio.h> 
int main ()
{
	
	char c;
	printf("Enter a value: ");
	scanf("%c",&c);
	
	if(c>=48 && c<=57)
	{
	    if(c%2==0)
	   {
		 printf("It is an Even number");
       }
		else 
        printf("This is an odd digit");
	}
	else if (c>=65 && c<=90)
	    printf("It is an alphabet in UPPERCASE");    
	else if (c>=97 && c<=122)
	    printf("It is an alphabet in LOWERCASE"); 
	else 
	    prinf("It is a special character");	    
}
