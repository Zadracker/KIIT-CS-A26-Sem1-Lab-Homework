//Fibbonacci series with a recursion

#include <stdio.h>
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int terms;
    printf("Number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

//Output
/*
Number of terms: 5
Fibonacci Series: 0 1 1 2 3
*/