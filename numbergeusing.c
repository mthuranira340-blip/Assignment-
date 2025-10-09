/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Des Number geusing game
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int secret;
	int attempts;
	int geus;
	 secret = rand () % 20 + 1;
	 
	 printf(" Geus the secret number(1 - 20):\n");
	 
	 while(1){
		 scanf("%d", &geus);
		 attempts ++;
		 if(geus>secret){
			 printf("Too high\n");
		 }else if(geus<secret){
			 printf("Too low \n");
		 }else
		 {
			 printf("congratulations you got it:\n");
			 break;
		 }
		 
	 }
	 
	 printf("your attempts %d attempts\n",attempts);
	return 0;
}