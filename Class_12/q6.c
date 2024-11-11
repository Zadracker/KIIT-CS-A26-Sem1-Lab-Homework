//Find the sum of all element present in an array

#include <stdio.h>
int sumOfArray(int arr[], int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Add each element to the sum
    }
    return sum;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = sumOfArray(arr, size);
    printf("The sum of all elements in the array is: %d\n", totalSum);
    return 0;
}
