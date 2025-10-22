/*
name mark thuranira 
reg no ct100/g/26254/25
description conversion of temperature using C=(F-32)*5/9
*/
#include <stdio.h>

int main()
{
	float farenheit;
	float celcius;
	printf("enter temperature in farenheit:");
	scanf("%f",&farenheit);
	
	celcius =(farenheit-32) * 5/9;
	
	printf("Temperatyre in farenheit %.2f\n",celcius);
	return 0;
}