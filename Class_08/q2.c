#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (int j = i; j >= 0; j--) {
            printf("%d", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

//Output
/*
Enter the number of rows: 5
    0
   101
  21012
 3210123
432101234
*/
