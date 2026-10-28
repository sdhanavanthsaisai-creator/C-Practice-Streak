#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0;
    double rate = 0.0;
    double time = 0.0;
    double amount = 0.0;
    printf("Enter the principal amount ($): ");
    scanf("%lf", &principal);
    printf("Enter the interest rate (%%): ");
    scanf("%lf", &rate);
    printf("Enter the time in years: ");
    scanf("%lf", &time);
    amount = principal * pow((1 + (rate / 100)), time);
    printf("Principal Amount: $%.2lf\n", principal);
    printf("Interest Rate: %.2lf%%\n", rate);
    printf("Time Period: %.2lf years\n", time);
    printf("Total Amount (A): $%.2lf\n", amount);
    printf("Compound Interest Earned: $%.2lf\n", amount - principal);
    return 0;
}
