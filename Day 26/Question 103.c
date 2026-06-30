//Write a program to Create ATM simulation.
#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 5000, amount;

    printf("===== ATM Simulation =====\n");

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin)
    {
        printf("Incorrect PIN. Access Denied.");
        return 0;
    }

    do
    {
        printf("\n\n===== ATM Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Your balance is: %.2f", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("Amount deposited successfully.");
                    printf("\nUpdated balance: %.2f", balance);
                }
                else
                {
                    printf("Invalid amount.");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= balance && amount > 0)
                {
                    balance -= amount;
                    printf("Please collect your cash.");
                    printf("\nRemaining balance: %.2f", balance);
                }
                else
                {
                    printf("Insufficient balance or invalid amount.");
                }
                break;

            case 4:
                printf("Thank you for using ATM.");
                break;

            default:
                printf("Invalid choice. Try again.");
        }

    } while(choice != 4);

    return 0;
}
