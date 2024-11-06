//Check whether the number is Armstrong or not

#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}

//Output
/*
Enter a number: 54
54 is not an Armstrong number.

Enter a number: 153
153 is an Armstrong number.
*/