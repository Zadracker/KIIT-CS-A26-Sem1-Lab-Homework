//WAP input a character (alphabet) and check whether it is vowel or consonant


#include <stdio.h>
int main(){
char input;
printf("Enter a character: ");
scanf(" %c", &input);
if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
    printf("Vowel\n");
} else {
    printf("Consonant\n");
}
return 0;
}

//Output
/*
Enter a character: d
Consonant

Enter a character: e
Vowel
*/