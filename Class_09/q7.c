//WAP to copy the contents of array

#include <stdio.h>

int main() {
int n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int original[n];
int copy[n];
printf("Enter %d elements-\n", n);
for (int i = 0; i < n; i++) {
    printf("Enter Element: ");
    scanf("%d", &original[i]);
}
for (int i = 0; i < n; i++) {
    copy[i] = original[i];
}
printf("Copied array elements:\n");
for (int i = 0; i < n; i++) {
    printf("%d ", copy[i]);
}
printf("\n");

return 0;}

//Output
/*
Enter the number of elements: 5
Enter 5 elements-
Enter Element: 1
Enter Element: 2
Enter Element: 3
Enter Element: 4
Enter Element: 5
Copied array elements:
1 2 3 4 5
*/