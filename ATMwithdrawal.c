/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Des ATM withdrawals for balance greater than 0 using while loop
*/

#include <stdio.h>
int main()
{
	float balance;
	float withdraw;
	
	printf("Enter your initial balance:");
	scanf("%f", &balance);
	
	
	while(balance>0){
		printf("Enter amount you wish to withdraw:");
		scanf("%f",&withdraw);
		
		//subtract withdraw from initial balance
		balance -= withdraw;
		if( balance > 0)
			printf("Remainig balnce is:%.2f\n",balance);
		else
			printf("oops you have insufficient\nfunds your balance is %.2f\n",balance);
	
		
	}
	printf("your transaction is succesful" );
	
	return 0;
}

