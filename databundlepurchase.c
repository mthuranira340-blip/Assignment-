/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Description purchase of mobile data bundles
*/

#include <stdio.h>

int main()
{
	int choice;
	
	printf(" choose preferable data pack bundle:\n");
	printf("1, 100mb @ 50ksh\n");
	printf("2, 500mb @ 200ksh\n");
	printf("3, 1GB   @ 350ksh\n");
	printf("4, 2GB   @ 600ksh\n");
	
	printf("choose your preferable data pack(1-4):");
	scanf("%d", &choice);
	
switch(choice)
{
case 1:
	printf("you selected 100mb @ 50ksh");
	break;
case 2:
	printf("you selected 500mb @ 200ksh");
	break;
case 3:
	printf("you selected 1GB @ 350ksh");
	break;
case 4:
	printf("you selected 2GB @ 600ksh");
	break;

default:
	printf("invalid choice");
	break;
}
	
	
	return 0;
}