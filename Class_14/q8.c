//Display all even no. b/w 1 to 50 using pointers

#include <stdio.h>
int main() {
    int numbers[50];
    int *ptr = numbers;
    for (int i = 1; i <= 50; i++) {
        *ptr = i;
        ptr++;
    }
    printf("Even numbers between 1 to 50: ");
    ptr = numbers;
    for (int i = 1; i <= 50; i++) {
        if (*ptr % 2 == 0) {
            printf("%d ", *ptr);
        }
        ptr++; 
    }
    printf("\n");
    return 0;
}

//Output
/*
Even numbers between 1 to 50: 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 
*/