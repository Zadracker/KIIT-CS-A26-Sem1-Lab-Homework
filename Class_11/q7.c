//1+((n^2)/2!)+((n^2)/3!)+((n^2)/4!)...

#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
double calculateSeriesSum(int n, int terms) {
    double sum = 1.0;
    for (int i = 2; i <= terms; i++) {
        sum += (double)(n * n) / factorial(i);
    }
    return sum;
}

int main() {
    int n, terms;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    double result = calculateSeriesSum(n, terms);
    printf("The sum of the series is: %.6f\n", result);
    return 0;
}

//Output
/*
Enter the value of n: 3
Enter the number of terms: 3
The sum of the series is: 7.000000
*/