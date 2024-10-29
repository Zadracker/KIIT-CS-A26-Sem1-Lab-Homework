//WAP to input the coefficients of x^2,x and constant. Find its root

#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,root;
printf("Enter the coefficient of x^2: ");
scanf("%f",&a);
printf("Enter the coefficient of x: ");
scanf("%f",&b);
printf("Enter the constant: ");
scanf("%f",&c);
root=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
printf("The root of %.2fx^2+%.2fx+%.2f is %.2f",a,b,c,root);
return 0;}

//Output
/*
Enter the coefficient of x^2: 1
Enter the coefficient of x: 6
Enter the constant: 8
The root of 1.00x^2+6.00x+8.00 is -2.00
*/