//Accept a number and check if positive or negative

#include <stdio.h>
int main(){
int a;
printf("Enter number: ");
scanf("%d",&a);
if (a>0){printf("%d is positive"),a;}
if (a<0){printf("%d is negative"),a;}
else {printf("The number is 0");}
return 0;}

//Output
/*
Enter number: 8
8 is positive

Enter number: -9
-9 is negative

Enter number: 0
The number is 0
*/