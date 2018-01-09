#include <stdio.h>

int main() {

    float balance;
    float interest;
    float monthly_payment;
    float percentage_interest_monthly;
    float percentage_interest_yearly;
    int payments;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Please enter number of payments: ");
    scanf("%d", &payments);

    percentage_interest_yearly = interest / 100;
    percentage_interest_monthly = percentage_interest_yearly / 12;

    for (int i = 0; i <= payments; i++) {

        balance = (balance * percentage_interest_monthly + balance) - monthly_payment;
        printf("Balance remaining after payment %d: %.2f\n", i, balance);

    }


    return 0;
}

