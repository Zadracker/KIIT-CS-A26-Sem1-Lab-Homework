//WAP to assign 2 different variables and swap them using 3rd variable

#include <stdio.h>
int main() {
int a=10;
int b=2;
int c;
printf("Value of a: %d\n",a);
printf("Value of b: %d\n",b);
printf("Swapping\n");
c=a;
a=b;
b=c;
printf("Value of a: %d\n",a);
printf("Value of b: %d\n",b);
return 0;}

//Output
/*
Value of a: 10
Value of b: 2
Swapping
Value of a: 2
Value of b: 10
*/