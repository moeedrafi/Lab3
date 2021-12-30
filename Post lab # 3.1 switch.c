#include<stdio.h>
#include<conio.h>
int main()
{
	//This program uses "Switch Statement"
	int a,b;
	char c;
	printf("Enter the arithmetic expression to be evaluated:\n");
	scanf("%d",&a);
	scanf(" %c",&c);
	scanf("%d",&b);
	switch (c)
	{
	case 43:
	{
		printf("%d + %d = %d",a,b,a+b);
		break;
	}
	case 45:
	{
		printf("%d - %d = %d",a,b,a-b);
		break;
	}
	case 42:
	{
		printf("%d * %d = %d",a,b,a*b);
		break;
	}
	case 47:
	{
		printf("%d / %d = %d",a,b,a/b);
		break;
	}
	case 37:
	{
		printf("%d % %d = %d",a,b,a%b);
		break;
	}
	default :
		printf("Invalid arithmetic operation");
	}
}
