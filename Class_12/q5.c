//Find the smallest element of an array using function

#include <stdio.h>
int findSmallest(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int size;
    printf("Size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = findSmallest(arr, size);
    printf("Smallest element: %d\n", smallest);
    return 0;
}

//Output
/*
Size of array: 5
Enter 5 elements:
05
-5
55
-55
32
Smallest element: -55
*/