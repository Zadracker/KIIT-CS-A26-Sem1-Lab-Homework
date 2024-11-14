//Display the contents of an array in reverse order using pointers 

#include <stdio.h>
void displayReverseUsingPointers(int *arr, int n) {
    arr = arr + n - 1;
    printf("Array elements in reverse order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *arr);
        arr--;
    }
    printf("\n");
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
    displayReverseUsingPointers(arr, n);
    return 0;
}

//Output
/*
Enter the number of elements: 2
Enter 2 elements:
1
3
Array elements in reverse order: 3 1 
*/