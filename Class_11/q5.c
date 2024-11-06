//Display the fibbonacci sequence

#include <stdio.h>
void displayFibonacci(int terms) {
    int first = 0, second = 1, next;
    printf("Fibonacci series up to %d terms:\n", terms);
    for (int i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}
int main() {
    int numTerms;
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    if (numTerms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        displayFibonacci(numTerms);
    }
    return 0;
}

//Output
/*
Enter the number of terms: 6
Fibonacci series up to 6 terms:
0 1 1 2 3 5 
*/