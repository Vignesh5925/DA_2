#include <stdio.h>

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

int main() {
    BankAccount account;
    initializeAccount(&account);

    // Test Case 1
    printf("Test Case 1:\n");
    deposit(&account, 1000);
    withdraw(&account, 500);
    printf("Account Balance: $%.2f\n", checkBalance(&account));

    // Test Case 2
    printf("\nTest Case 2:\n");
    deposit(&account, 1000);
    withdraw(&account, 1500);

    return 0;
}
