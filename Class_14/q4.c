//Find the simple interest using pointers

#include <stdio.h>
void calculateSimpleInterest(float* principal, float* rate, float* time, float* interest) {
    *interest = (*principal) * (*rate) * (*time) / 100;
}
int main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    calculateSimpleInterest(&principal, &rate, &time, &interest);
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}

//Output
/*
Enter the principal amount: 1000
Enter the rate of interest: 32
Enter the time period (in years): 10
Simple Interest: 3200.00
*/