//Accept any 10 integers to an array and find sum of all positive even no. and odd no.

#include <stdio.h>

int main() {
int numbers[10];
int sum_even = 0;
int sum_odd = 0;
for (int i = 0; i < 10; i++) {
    printf("Enter number: ");
    scanf("%d", &numbers[i]);
}
for (int i = 0; i < 10; i++) {
    if (numbers[i] > 0 && numbers[i] % 2 == 0) {
        sum_even += numbers[i];
    } else if (numbers[i] % 2 != 0) {
        sum_odd += numbers[i];
    }
}
printf("Sum of positive even numbers: %d\n", sum_even);
printf("Sum of odd numbers: %d\n", sum_odd);
return 0;}

//Output
/*
Enter number: 1 
Enter number: 2
Enter number: 3
Enter number: 4
Enter number: 5
Enter number: 6
Enter number: 7
Enter number: 8
Enter number: 9
Enter number: 10
Sum of positive even numbers: 30
Sum of odd numbers: 25
*/