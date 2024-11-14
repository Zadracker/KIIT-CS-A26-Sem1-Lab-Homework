//Input 10 integers to an array and display the same using pointers

#include <stdio.h>
int main() {
    int arr[10];
    int* ptr = arr;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }
    printf("You entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}

//Output
/*
Enter 10 integers:
8
2
3
4
1
6 
5
9
0
7
You entered:
8 2 3 4 1 6 5 9 0 7
*/