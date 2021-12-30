#include<stdio.h>
#include<conio.h>
int main()
{
	//This program uses "if/else Statement"
	int a,b;
	char c;
	printf("Enter the arithmetic expression to be evaluated:\n");
	scanf("%d",&a);
	scanf(" %c",&c);
	scanf("%d",&b);
	if (c == 43)
		printf("%d + %d = %d",a,b,a+b);
	else if (c== 45)
		printf("%d - %d = %d",a,b,a-b);
	else if (c== 42)
		printf("%d * %d = %d",a,b,a*b);
	else if (c== 47)
		printf("%d / %d = %d",a,b,a/b);
	else if (c== 37)
		printf("%d % %d = %d",a,b,a%b);
	else 
		printf("Invalid arithmetic operation for this calculator");
}
