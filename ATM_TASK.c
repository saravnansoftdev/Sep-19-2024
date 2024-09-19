#include<stdio.h>

int main()
{
	//ATM TASK....
	int Digit = 1234;
	int PinNumber;
	float Balance = 2500.63;
	float WdrawAmount;
	float Deposit;
	int AccType;
	printf("enter your pin number : ");
	scanf("%d",&PinNumber);
	if(PinNumber == Digit)
	{
		printf("	--------------------------\n");
		printf("	    WELCOME XYZ Bank\n");
		printf("	--------------------------\n");
		printf("Select Your Account Type \n");
		printf("Saving Account		: 1\n");
		printf("Current Account		: 2\n");
		printf("Enter : ");
		scanf("%d",&AccType);
//		scanf("%c",&AccType);
//		printf("Dummy data %c\n\n",AccType);
		if(AccType == 1)
		{
			printf("\n\n	--------------------------\n");
			printf("	SAVING ACCOUNT - XYZ Bank\n");
			printf("	--------------------------\n");
			printf("Mr Saran Continue your process:\n");
			printf("Balance Enquiry 		: 1\n");
			printf("Withdraw			: 2\n");
			printf("Deposit				: 3\n");
			printf("Cancel 				: 4\n");
			int Options;
			printf("Feed your option: ");
			scanf("%d",&Options);
			switch(Options)
			{
				case 1:
					printf("\nName 			: Saran\n");
					printf("Account Number 		: 3847928XXX\n");
					printf("Balance in Rupees 	: %f$\n",Balance);
					break;
				case 2:
					printf("Enter the amount you wanna withdraw: ");
					scanf("%f",&WdrawAmount);
					if(Balance<WdrawAmount)
					{
						printf("Insufficient Balance...Try Again Please.");
					}
					else
					{
						Balance = Balance -  WdrawAmount;
						printf("Your current balance : %f",Balance);
						printf("\n\n-------------Thank You Visit Again--------------");
					}
					break;
				case 3:
					printf("Enter the amount you wanna depoit: ");
					scanf("%f",&Deposit);
					Balance += Deposit;
					printf("Your new current balance : %f",Balance);
				case 4:
					printf("\nThank you visit again...");
					break;
				default:
					printf("\nInvalid input...Try again...");
					break;
			}
		}
		else if(AccType == 2)
		{
			printf("\n\n	--------------------------\n");
			printf("	CURRENT ACCOUNT - XYZ Bank\n");
			printf("	--------------------------\n");
			printf("Mr Saran Continue your process:\n");
			printf("Balance Enquiry 		: 1\n");
			printf("Withdraw			: 2\n");
			printf("Deposit				: 3\n");
			printf("Cancel 				: 4\n");
			int Options;
			printf("Feed your option: ");
			scanf("%d",&Options);
			switch(Options)
			{
				case 1:
					printf("\nName 			: Saran\n");
					printf("Account Number 		: 3847928XXX\n");
					printf("Balance in Rupees 	: %f$\n",Balance);
					break;
				case 2:
					printf("Enter the amount you wanna withdraw: ");
					scanf("%f",&WdrawAmount);
					if(Balance<WdrawAmount)
					{
						printf("Insufficient Balance...Try Again Please.");
					}
					else
					{
						Balance = Balance -  WdrawAmount;
						printf("Your current balance : %f",Balance);
						printf("\n-------------Thank You Visit Again--------------");
					}
					break;
				case 3:
					printf("Enter the amount you wanna depoit: ");
					scanf("%f",&Deposit);
					Balance += Deposit;
					printf("Your new current balance : %0.1f",Balance);
				case 4:
					printf("Thank you visit again...");
					break;
				default:
					printf("\nInvalid input...Try again...");
					break;
			}
		}		
		else
		{
			printf("Enter Valid Input...");
		}
	}
	else
	{
		printf("\nInvalid Pin Number...Try Again!");
	}
//	printf(".................WELCOME.................\n");
//	printf(".................XYZ Bank.................\n");
	return;
}