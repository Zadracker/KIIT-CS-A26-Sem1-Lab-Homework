//Take a number and check if it is +ve, -ve or 0 using switch case

#include <stdio.h>
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    switch (a) {
        case 0:
            printf("Result: The number is zero.\n");
            break;
        default:
            if (a < 0) {
                printf("Result: The number is negative.\n");
            } else {
                printf("Result: The number is positive.\n");
            }
            break;}
return 0;}

//Outpiut
/*
Enter number: 8
Result: The number is positive.

Enter number: 0
Result: The number is zero.

Enter number: -7
Result: The number is negative.
*/