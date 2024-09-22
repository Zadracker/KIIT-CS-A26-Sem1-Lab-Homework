//Take an alphabet and check if it is vowel or consonant using switch case

#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel.\n");
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                printf("consonant.\n");
            } else {
                printf("Invalid input\n");
            }
            break;
    }

    return 0;
}
//Output
/*
Enter an alphabet: a
vowel.

Enter an alphabet: j
consonant.

Enter an alphabet: 2
Invalid input
*/