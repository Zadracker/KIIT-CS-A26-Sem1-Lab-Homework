//Accept 2 number find the largest among them using switch case

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    switch (num1 > num2) {
        case 1: 
            printf("The largest number is: %d\n", num1);
            break;
        case 0: 
            switch (num1 < num2) {
                case 1:
                    printf("The largest number is: %d\n", num2);
                    break;
                case 0: 
                    printf("Both numbers are equal: %d\n", num1);
                    break;
            }
            break;
    }

    return 0;
}

//Output
/*
Enter two numbers: 2 3
The largest number is: 3

Enter two numbers: 78 7
The largest number is: 78
*/