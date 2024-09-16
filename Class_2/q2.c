//WAP to input 3 sides of a triangle, find its perimeter and area

#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,s,perimeter,area;
printf("Enter 1st side of the triangle: ");
scanf("%f",&a);
printf("Enter 2nd side of the triangle: ");
scanf("%f",&b);
printf("Enter 3rd side of the triangle: ");
scanf("%f",&c);
perimeter=a+b+c;
s=perimeter/2; area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Perimeter of triangle is %f\n",perimeter);
printf("Area of triangle is %f\n",area);
return 0;}

//Output
/*
Enter 1st side of the triangle: 2
Enter 2nd side of the triangle: 3
Enter 3rd side of the triangle: 4
Perimeter of triangle is 9.000000
Area of triangle is 2.904737
*/