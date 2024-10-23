//Find largest element in array

#include <stdio.h>
int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int numbers[n];
for (int i = 0; i < n; i++) {
    printf("Enter element: ");
    scanf("%d", &numbers[i]);
}
int largest = numbers[0];
for (int i = 1; i < n; i++) {
    if (numbers[i] > largest) {
        largest = numbers[i];
    }
}
printf("The largest element in the array is: %d\n", largest);
return 0;}

//Output
/*
Enter the number of elements: 5
Enter element: 6
Enter element: 2
Enter element: 3
Enter element: 9
Enter element: -3
The largest element in the array is: 9
*/