//WAP input a year and check whether it is leap year or not

#include <stdio.h>
int main(){
int year;
printf("Enter a year: ");
scanf(" %d", &year);
if (year%4 == 0) {
    printf("Leap year");
} else {
    printf("Not leap year");
}
return 0;
}

//Output
/*
Enter a year: 2024
Leap year

Enter a year: 2023
Not leap year
*/