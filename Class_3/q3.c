//check if input number is even or odd

#include <stdio.h>
int main(){
int a;
printf("Enter number: ");
scanf("%d",&a);
if (a%2==0){printf("Number is even");}
if (a%2==1){printf("Number is odd");}
return 0;}

//Output
/*
Enter number: 2
Number is even

Enter number: 3
Number is odd
*/