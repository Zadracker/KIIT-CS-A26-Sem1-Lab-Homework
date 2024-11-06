//Calculate Simple Interest

#include <stdio.h>
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
int main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    interest = calculateSimpleInterest(principal, rate, time);
    printf("The simple interest is: %.2f\n", interest);
    return 0;
}

//Output
/*
Enter the principal amount: 1000
Enter the rate of interest: 10
Enter the time period (in years): 5
The simple interest is: 500.00
*/
