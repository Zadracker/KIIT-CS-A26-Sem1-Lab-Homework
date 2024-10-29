//Input any 5 integers and find its average

#include <stdio.h>
int main(){
int a,b,c,d,e,avg;
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
printf("Enter the value of c: ");
scanf("%d",&c);
printf("Enter the value of d: ");
scanf("%d",&d);
printf("Enter the value of e: ");
scanf("%d",&e);
avg=(a+b+c+d+e)/5;
printf("The average of the 5 integers is %d",avg);
return 0;}

//Output
/*
Enter the value of a: 1
Enter the value of b: 2
Enter the value of c: 3
Enter the value of d: 4
Enter the value of e: 5
The average of the 5 integers is 3
*/