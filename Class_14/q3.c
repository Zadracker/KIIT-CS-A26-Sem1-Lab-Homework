//Swap contents of 2 variables using pointers

#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;  
    *a = *b;      
    *b = temp;     
}
int main() {
    int x = 10, y = 20;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

//Output
/*
Before swapping: x = 10, y = 20
After swapping: x = 20, y = 10
*/