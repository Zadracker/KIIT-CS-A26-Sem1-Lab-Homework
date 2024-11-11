//Find the sum of all element present in an array

#include <stdio.h>
int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int main() {
    int size;
    printf("Size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = sumOfArray(arr, size);
    printf("Sum of all elements: %d\n", totalSum);
    return 0;
}
//Output
/*
Size of the array: 5
Enter 5 elements:
-99
99
121
7 
0
Sum of all elements: 128
*/