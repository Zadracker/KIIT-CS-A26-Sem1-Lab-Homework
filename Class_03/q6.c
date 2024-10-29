//Input 3 sides of a triangle and check if triangle is right-angled triangle or not

#include <stdio.h>
int main(){
float a,b,c;
printf("Enter 3 sides of a triangle: ");
scanf("%f %f %f",&a,&b,&c);
if (a>b && a>c){
    float temp=a;
    a=c;
    c=temp;}
if (b>a && b>c){
    float temp=b;
    b=c;
    c=temp;}
if ((a*a)+(b*b)==(c*c)){
    printf("The triangle is right-angled");
} else {
    printf("The triangle is not right-angled");
}
return 0;}

//Output
/*
Enter the 3 sides of a triangle: 3 4 5
The triangle is right-angled

Enter 3 sides of a triangle: 1 1 2
The triangle is not right-angled
*/