//Input coefficients of a quadratic equation and find the nature of roots [imaginary or real]

#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,d;
printf("Enter the coefficient of x^2: ");
scanf("%f",&a);
printf("Enter the coefficient of x: ");
scanf("%f",&b);
printf("Enter the constant: ");
scanf("%f",&c);
d=sqrt((b*b)-(4*a*c));
if (d>=0){printf("roots of equation are real");}
else {printf("roots of equation are imaginary");}
return 0;}

//Output
/*
Enter the coefficient of x^2: 3
Enter the coefficient of x: 1
Enter the constant: 9
The roots of equation are imaginary

Enter the coefficient of x^2: 2
Enter the coefficient of x: 4
Enter the constant: 2
The roots of equation are real
*/