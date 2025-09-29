/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Description Exam eligibility
*/

#include <stdio.h>

int main()
{
	float attendance;
	float marks;
	
	// prompt the user to enter attendance in percentage
	printf("enter your attendance in percentage:");
	scanf("%f", &attendance);
	
	//prompt the user to enter average marks
    printf("enter your average marks:");
	scanf("%f", &marks);

	// we use the if  else  check the eligibility
	if(attendance >= 75 && marks>=40){
		printf("eligible for exam");
	}else
	{
		printf("not eligible");
	}
	
		return 0;

}
