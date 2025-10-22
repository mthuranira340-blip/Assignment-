/*
name mark thuranira 
reg no ct100/g/26254/25
description electricity bill calculator
*/

#include <stdio.h>

int main()
{
	int units;
	float bill;
	
	printf("Enter electricity units consumed:");
	scanf("%i",&units);
 
    if(units <=100){
		bill= units * 15;
	}	else if( units<=200){
		bill = (100 * 15 ) + (units - 100) * 20;
	}else{
		bill = (100 * 15) + (100 * 20) + (units - 200) * 25;
	}
	printf("your total bill is %.2f\n",bill);
	return 0;
}