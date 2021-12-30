#include<conio.h>
#include<stdio.h>
int main ()
{
	int a, b, c, d, e;
	printf("Enter First Number :");
	scanf("%d",&a);
	printf("\nEnter Second Number :");
	scanf("%d",&b);
	printf("\nEnter Third Number :");
	scanf("%d",&c);
	printf("\nEnter Fourth Number :");
	scanf("%d",&d);
	printf("\nEnter Fifth Number :");
	scanf("%d",&e);
	
	if (a>b && a>c && a>d && a>e)
	     printf("Largest of Five Numbers is %d",a);
	else if (b>a && b>c && b>d && b>e)
	    printf("\nLargest of Five Numbers is %d",b);
	else if (c>a && c>b && c>d && c>e)
	    printf("\nLargest of Five Numbers is %d",c);
	else if (d>a && d>b && d>c && d>e)
	    printf("\nLargest of Five Numbers is %d",d);
	else 
	    printf("\nLargest of Five Numbers is %d",e);			    
}
