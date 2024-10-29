//Input the bse and height of right-angled triangle, then find its area and hypotenuse

#include <stdio.h>
#include <math.h>
int main(){
float a,b,c,area;
printf("Enter the base of right-angled triangle: ");
scanf("%f",&a);
printf("Enter the height of right-angled triangle: ");
scanf("%f",&b);
c=sqrt((a*a)+(b*b));
area=(0.5)*a*b;
printf("The hypotenuse of right-angled triangle is %.2f\n",c);
printf("The area of right-angled triangle is %.2f\n",area);
return 0;}

//Output
/*
Enter the base of right-angled triangle: 3
Enter the height of right-angled triangle: 5
The hypotenuse of right-angled triangle is 5.83
The area of right-angled triangle is 7.50
*/