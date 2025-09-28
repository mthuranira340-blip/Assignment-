/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Description calculation of the water bill
*/

#include <stdio.h>

int main()
{
	int units;
	float bill;
	
	
	//prompt tje user to enter the water units consumed
	printf("Enter your water units consumed:");
	scanf("%d",&units);
	
	//use the if, else if, else, to calculate the total bill
	
	if(units<=30){
		bill= units * 20;
	}else if(units<=60)
	{
	bill=units * 25 ;
	
	}else{
		bill=units * 30;
	}
	printf("your total water bill is %.2f", bill );
	
	return 0;
}