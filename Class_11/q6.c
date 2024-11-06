//1+(1/2!)+(1/3!)+...+(1/n!)

#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
double calculateSeriesSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / factorial(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    double result = calculateSeriesSum(n);
    printf("The sum of the series is: %.6f\n", result);
    return 0;
}

//Output
/*
Enter the value of n: 5
The sum of the series is: 1.716667
*/