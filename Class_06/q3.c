//Check if number is even or odd using turnary operators

#include <stdio.h>

int main() {
    int a;  // Declare two integers
    printf("Enter number: ");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("%d is Even\n", a) : printf("%d is Odd\n", a);
    return 0;
}

//Output
/*
Enter number: 7
7 is Odd

Enter number: 2
2 is Even
*/