//Accept a day of week from user and displat the corresponding weekday

#include <stdio.h>
int main(){
int a;
printf("Enter a day of the week: [number b/w 1-5] ");
scanf("%d",&a);
switch (a){
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
    break;
    case 3: printf("Wednesday");
    break;
    case 4: printf("Thursday");
    break;
    case 5: printf("Friday");
    break;
    default: printf("It is the weekend");
}    
return 0;}

//Output
/*
Enter a day of the week: [number b/w 1-5] 2
Tuesday

Enter a day of the week: [number b/w 1-5] 6
It is the weekend
*/