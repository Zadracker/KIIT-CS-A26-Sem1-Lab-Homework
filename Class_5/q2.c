//Prepare an arithmatic calculator using switch

#include <stdio.h>
int main(){
int a,b;
char o;
printf("Enter your 1st number you want to operate on: ");
scanf("%d %c %d",&a,&o,&b);
switch(o){
    case '+': printf("Result: %d",a+b);
    break;
    case '-': printf("Result: %d",a-b);
    break;
    case '*': printf("Result: %d",a*b);
    break;
    case '/': printf("Result: %d",a/b);
    break;
    case '%': printf("Result: %d",a%b);
    break;
    default: printf("Invalid Operation");
}
return 0;}

//Output
/*
Enter your 1st number you want to operate on: 4 / 2
Result: 2

Enter your 1st number you want to operate on: 9 - 5
Result: 4
*/