//Find the sum of all elements of an array using pointers

#include <stdio.h>
int sumUsingPointers(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *arr; 
        arr++;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = sumUsingPointers(arr, n);
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

//Output
/*
Enter the number of elements: 3
Enter 3 elements:
1
2
3
Sum of array elements: 6
*/