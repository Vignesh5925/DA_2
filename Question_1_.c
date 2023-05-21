#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float balance;
} BankAccount;

void initializeAccount(BankAccount *account) {
    account->balance = 0.0;
}

void deposit(BankAccount *account, float amount) {
    account->balance += amount;
}

void withdraw(BankAccount *account, float amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
    } else {
        printf("Error: Insufficient funds\n");
    }
}

float checkBalance(BankAccount *account) {
    return account->balance;
}

void displayMenu() {
    printf("\nStack Operations:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    BankAccount account;
    initializeAccount(&account);
    
    int choice;
    float amount;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                deposit(&account, amount);
                printf("Amount deposited successfully.\n");
                break;

            case 2:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;

            case 3:
                printf("Account Balance: $%.2f\n", checkBalance(&account));
                break;

            case 4:
                printf("Exiting the program...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (1);

    return 0;
}
