#include<stdio.h>
int atm(){
    unsigned
    int pin;
    while (pin != 1520){
        printf("Enter your secret pin number: ");
        scanf("%d",%pin);
        if(pin != 1520){
            printf("Please enter valid password\n");
        }
    }
    do{
        printf ("*****Welcome to ATM Service*****");
        printf ("1. Check Balance\n");
        printf ("2. Withdraw Cash\n");
        printf ("3. Deposit Cash\n");
        printf ("4. Quit\n");
        printf ("**************?\n\n");
        printf ("Enter your choice :");
        scanf ("%d"&choice)
        switch()
        {
        case 1:
        printf("\n Your Balance in rs : %lu",amount);
        break;
        case 2:
        printf("\n Enter the amount to Withdraw : ");
        scanf("%lu",withdraw);
        if(withdraw % 100 !=0){
            printf ("\n Please enter the amount in multiples of 100");
        }
        else if(withdraw>(amount - 500)){
            printf("\nInsufficient Balance");
        }
        else{
            amount = amount-withdraw;
            printf("\nPlesa collect cash");
            printf("\nYour current Balance IS%lu",amount);
        }
        break;
        case 3:
            printf("\nEnter the Amount to Deposit");
            scanf("%lu",&deposit);
            amount = amount + deposit;
            printf("Your balance using ATM");
        break;
        default:
        printf("\nThank you");
        }
    printf("\nDo you wish to have another Transaction?(y/n):\n");
    }while(!k);
    printf ("\n\nThanks for using out ATM Service");
    return ();
}
