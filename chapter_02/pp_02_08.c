#include <stdio.h>

int main(void)
{
    float loan, interest, installment, monthly_interest;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &installment);

    monthly_interest = interest / 1200;

    loan = loan - installment + (loan * monthly_interest);
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = loan - installment + (loan * monthly_interest);
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan = loan - installment + (loan * monthly_interest);
    printf("Balance remaining after third payment: $%.2f\n", loan);
    return 0;
}
