//WAP accept 15 elements in array and store even integers and odd integer in 2 different arrays

#include <stdio.h>

int main() {
int numbers[15];
int even[15], odd[15];
int even_count = 0, odd_count = 0;
printf("Enter 15 integers-\n");
for (int i = 0; i < 15; i++) {
    printf("Element: ");
    scanf("%d", &numbers[i]);
}
for (int i = 0; i < 15; i++) {
    if (numbers[i] % 2 == 0) {
        even[even_count] = numbers[i];
        even_count++;
    } else {
        odd[odd_count] = numbers[i];
        odd_count++;
    }
}
printf("Even integers:\n");
for (int i = 0; i < even_count; i++) {
    printf("%d ", even[i]);
}
printf("\n");
printf("Odd integers:\n");
for (int i = 0; i < odd_count; i++) {
    printf("%d ", odd[i]);
}
printf("\n");
return 0;}

//Output
/*
Enter 15 integers-
Element: 1
Element: 2
Element: 3
Element: 4
Element: 5
Element: 6
Element: 7
Element: 8
Element: 9
Element: 10
Element: 1
Element: 12
Element: 13
Element: 14
Element: 15
Even integers:
2 4 6 8 10 12 14
Odd integers:
1 3 5 7 9 1 13 15
*/