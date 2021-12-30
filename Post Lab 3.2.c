#include<stdio.h>
#include<conio.h>
int main ()
{
	//Auto Loan calculator
	//VP=Vehicles price	DP=Down Payment		IM=Installment Months	PA=Payable Amount	IR=Interest Rate	NPA=New PA
	int VP,DP,IM,PA,IR,NPA;
	printf("Enter Vehicle Price(Total price of car) in rupees=");
	scanf("%d",&VP);
	printf("Enter Down Payment in rupees=");
	scanf("%d",&DP);
	printf("For how many months, do you want to lease the car?\t");
	scanf("%d",&IM);
	PA=VP-DP;
	if (IM<=12)
	{
		IR=10/100;
		NPA=(PA+(PA*IR));
		printf("Monthly Installment=%d",NPA/IM);
	}
	else if (IM>12 && IM<=24)
	{
		IR=15/100;
		NPA=(PA+(PA*IR));
		printf("Monthly Installment=%d",NPA/IM);
	}
	else if (IM>24 && IM<=36)
	{
		IR=20/100;
		NPA=(PA+(PA*IR));
		printf("Monthly Installment=%d",NPA/IM);
	}
	else if (IM>36 && IM<=48)
	{
		IR=25/100;
		NPA=(PA+(PA*IR));
		printf("Monthly Installment=%d",NPA/IM);
	}
	else if (IM>48 && IM<=60)
	{
		IR=30/100;
		NPA=(PA+(PA*IR));
		printf("Monthly Installment=%d",NPA/IM);
	}
	else
		printf("Not more than 60 months are allowed for the car to be leased");
}
