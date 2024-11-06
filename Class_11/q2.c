//Perform all arithmetic operations of 2 integers

#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
float divide(int a, int b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return (float)a / b;
}
int modulus(int a, int b) {
    if (b == 0) {
        printf("Error! Modulus by zero.\n");
        return 0;
    }
    return a % b;
}

int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    printf("Addition: %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction: %d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));
    printf("Division: %d / %d = %.2f\n", num1, num2, divide(num1, num2));
    printf("Modulus: %d %% %d = %d\n", num1, num2, modulus(num1, num2));

    return 0;
}

//Output
/*
Enter first integer: 9
Enter second integer: 2
Addition: 9 + 2 = 11
Subtraction: 9 - 2 = 7
Multiplication: 9 * 2 = 18
Division: 9 / 2 = 4.50
Modulus: 9 % 2 = 1
*/