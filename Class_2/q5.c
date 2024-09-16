//Input 2 angles of a triangle and find the 3rd angle

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter the 1st angle: ");
scanf("%d",&a);
printf("Enter the 1st angle: ");
scanf("%d",&b);
c=180-(a+b);
printf("The 3rd angle of the triangle is %d",c);
return 0;}

//Output
/*
Enter the 1st angle: 80
Enter the 1st angle: 60
The 3rd angle of the triangle is 40
*/