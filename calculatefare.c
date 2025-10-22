/*
name mark thuranira 
reg no ct100/g/26254/25
description calculation of the fare
*/
#include <stdio.h>

int main()
{
	float distance, fare;
	
 
    printf("Enter total distance covered (km):" );
    scanf("%f",&distance);
    
    fare = distance * 50;
    
    printf("Your total fare kshs %.2f,\n",fare);

    return 0;
}