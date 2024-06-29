#include <stdio.h>

int main() {
    int choice;
    float amount = 0;
    float balance = 0;

    while (1) {
        printf("Click 1 to check the balance\n");
        printf("Click 2 to deposit money\n");
        printf("Click 3 to withdraw money\n");
        printf("Click 4 to Exit to main menu\n");
        
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("The balance is %.2f\n", balance);
                break;
                
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("The amount %.2f has been added to your balance\n", amount);
                } else {
                    printf("Invalid amount, bruh\n");
                }
                break;
                
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("The amount %.2f has been debited from your account\n", amount);
                } else {
                    printf("Invalid amount or insufficient balance, bruh\n");
                }
                break;
                
            case 4:
                printf("Bye bye tata\n");
                return 0;
                
            default:
                printf("Something went wrong, bruhhh :-(\n");
                break;
        }
    }

    return 0;
}

