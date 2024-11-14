//Display all elements of an array by incremented by 2 and display it after updation using pointers

#include <stdio.h>
void displayAndIncrement(int *arr, int size) {
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    for (int i = 0; i < size; i++) {
        *(arr + i) += 2;
    }
    printf("\nUpdated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayAndIncrement(arr, size);
    return 0;
}

//Output
/*
Original Array: 1 2 3 4 5 
Updated Array: 3 4 5 6 7
*/