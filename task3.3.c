#include<stdio.h>
#include<conio.h>
//lab task 3.3
int main ()
{
	int per; 
        	printf("Enter Student's Score: ",per);
	        scanf("%d",&per);
	if (per>=85 && per<100)
	           printf("The Student has Grade A",per);
	else if (per>=72 && per<84)
               printf("The Student has Grade B",per);
	else if (per>=60 && per<71)
	           printf("The Student has Grade C",per); 
	else if (per>=50 && per<59)
	           printf("The Student has Grade D",per); 
	else if (per>=0 && per<49)
               printf("Student has Failed with F Grade",per);
}
