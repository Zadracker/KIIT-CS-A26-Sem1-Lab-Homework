//WAP to input values of y and find x^y [x=5]

#include <stdio.h>
#include <math.h>
int main(){
int x=5;
int a,y;
printf("Value of y: ");
scanf("%d",&y);
a= pow(x,y);
printf("Value of x^y is %d, [x=5]",a);
return 0;}

//Output
/*
Value of y: 2
Value of x^y is 25, [x=5]
*/