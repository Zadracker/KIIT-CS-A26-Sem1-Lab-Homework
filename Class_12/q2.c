//Find the factorial using recursion

#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    return 0;
}

//Output
/*
Enter a number: 5
Factorial of 5 is 120
*/
