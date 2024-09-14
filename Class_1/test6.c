//WAP to assign 2 different vairables and swap them without using 3rd variable

#include <stdio.h>
int main() {
int x=2;
int y=3;
printf("Value of x is %d\n",x);
printf("Value of y is %d\n",y);
printf("Swapping");
x=x+y;
y=x-y;
x=x-y;
printf("Value of x is %d\n",x);
printf("Value of y is %d\n",y);
return 0;}

//Output
/*
Value of x is 2
Value of y is 3
Swapping
Value of x is 3
Value of y is 2
*/