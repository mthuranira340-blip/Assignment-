
/*
name mark Thuranira
reg ct100/g/26254/25
des  checking for eligibilityb of a bank loan
*/

#include<stdio.h>

int main()
{
	int age;
	float income;
	
	
	printf("enter your age:");
	scanf("%d", &age);
	
	printf("\n enter your annual income(in shillings):");
	scanf("%f",&income);
	
	if(age >=21 && income >=21000){
    printf("\ninvalid input. Age and income must be a positive number");
	printf("\n congratulations you are eligible for a loan");
	}
	else(age<21 && income<20000);
	{
	printf("\n unfortunately we are unable to offer you a loan at this time");
	}
	return 0;
 }
