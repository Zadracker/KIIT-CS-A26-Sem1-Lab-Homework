//Accept both +ve & -ve float no. to an array & find sum of all +ve no. & product of all negative no.

#include <stdio.h>

int main() {
float positive_sum = 0.0;
float negative_product = 1.0;
int negative_count = 0;
float numbers[10];
for (int i = 0; i < 10; i++) {
    printf("Enter number: ");
    scanf("%f", &numbers[i]); 
}
for (int i = 0; i < 10; i++) {
    if (numbers[i] >= 0) {
        positive_sum += numbers[i];
    } else {
        negative_product *= numbers[i];
        negative_count++;
    }
}
if (negative_count == 0) {
    negative_product = 0;
}
printf("Sum of positive numbers: %f\n", positive_sum);
if (negative_count > 0) {
printf("Product of negative numbers: %f\n", negative_product);
} 
return 0;}

//Output
/*
Enter number: 0
Enter number: 1
Enter number: 2
Enter number: 3
Enter number: 4
Enter number: 5
Enter number: -2
Enter number: -3
Enter number: -10
Enter number: -8
Sum of positive numbers: 15.000000
Product of negative numbers: 480.000000
*/