//Accept a number and display all the numbers present in it using while loop

#include <stdio.h>
int main() {
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The digits in the number are: ");
    while (number > 0) {
        digit = number % 10; 
        printf("%d ", digit); 
        number = number / 10; 
    }
    printf("\n");
    return 0;
}
//Output
/*
Enter a number: 9576
The digits in the number are: 6 7 5 9
*/