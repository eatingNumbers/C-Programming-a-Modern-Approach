#include <stdio.h>

int main() {

    float user_input;
    float interest;
    float monthly_payment;
    float first_payment;
    float second_payment;
    float third_payment;
    float percentage_interest_monthly;
    float percentage_interest_yearly;

    printf("Enter amount of loan: ");
    scanf("%f", &user_input);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    percentage_interest_yearly = interest / 100;
    percentage_interest_monthly = percentage_interest_yearly / 12;

    first_payment = (user_input * percentage_interest_monthly + user_input) - monthly_payment;
    second_payment = (first_payment * percentage_interest_monthly + first_payment) - monthly_payment;
    third_payment = (second_payment * percentage_interest_monthly + second_payment) - monthly_payment;

    printf("Balance remaining after first payment: %.2f\n", first_payment);
    printf("Balance remaining after second payment: %.2f\n", second_payment);
    printf("Balance remaining after third payment: %.2f\n", third_payment);

    return 0;
}

