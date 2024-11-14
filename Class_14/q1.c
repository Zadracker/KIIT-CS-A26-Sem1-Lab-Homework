//Perform all arithmatic operations using pointers
#include <stdio.h>
void arithmetic_operations(int* a, int* b, int* add, int* subtract, int* multiply, int* divide, int* modulus) {
    *add = *a + *b;
    *subtract = *a - *b; 
    *multiply = *a * *b;  
    *divide = (*b != 0) ? (*a / *b) : 0; 
    *modulus = (*b != 0) ? (*a % *b) : 0; 
}
int main() {
    int x = 20, y = 10;
    int add, subtract, multiply, divide, modulus;
    arithmetic_operations(&x, &y, &add, &subtract, &multiply, &divide, &modulus);
    printf("Addition: %d + %d = %d\n", x, y, add);
    printf("Subtraction: %d - %d = %d\n", x, y, subtract);
    printf("Multiplication: %d * %d = %d\n", x, y, multiply);
    printf("Division: %d / %d = %d\n", x, y, divide);
    printf("Modulus: %d %% %d = %d\n", x, y, modulus);
    return 0;
}

//Output
/*
Addition: 20 + 10 = 30
Subtraction: 20 - 10 = 10
Multiplication: 20 * 10 = 200
Division: 20 / 10 = 2
Modulus: 20 % 10 = 0
*/