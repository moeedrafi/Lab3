#include<stdio.h>
#include<conio.h>
//Lab Task 3.1
int main ()
{

	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	if (a>b)
	  printf("%d is greater than %d",a,b);
	if (b>a)
	  printf("%d is greater than %d",b,a);
}
