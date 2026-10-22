#include<stdio.h>
int main()
{
int pin=1234;
int enteredpin;
int choice;
float balance=5000;
printf("welcome to ATM\n");
printf("enter you PIN: ");
scanf("%d",&enteredpin);
if(enteredpin!=pin);
{
   printf("invalid PIN\n");
   return 0;
}

printf("login successful\n");

do
{
  printf("\n===== ATM MENU =====\");
  printf("1. Check Balance\n");
  printf("2. Deposit Money\n");
  printf("3. Withdraw Money\n");
  printf("Exit\n");

  printf("Enter Choice: ");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
      printf("Your Balance: Rs. %.2f\n",balance);
      break;

    case 2:
      printf("Enter Deposit amount: ");
      scanf("%f",&amount);

      if(amount>0)
      {
	balance=balance + amount;
	printf("Money Deposited successfully!\n");
	printf("New Balance: Rs. %.2f\n",balance);
      }
      else
      {
	printf("Invalid Amount!\n");
      }
      break;

      case 3:
	 printf("Enter Withdrawal amount: ");
	 scanf("%f",&amount);

	 if(amount<=0)
	 {
	   printf("Invalid Amount!\n");
	 }
	 else if(amount<=balance)
	 {
	    balance=balance-amount;
	    printf("Please collect your cash. \n");
	    printf("Remaining balance: Rs. %.2f\n",balance);
	 }
	 else
	 {
	   printf("Insufficient balance!\n");
	 }
	 break;

      case 4:
	  printf("Thank you for using ATM!\n");
	  break;

      default:
	 printf("Invalid Choice!\n");
    }

  } while(choice != 4);


return 0;
}