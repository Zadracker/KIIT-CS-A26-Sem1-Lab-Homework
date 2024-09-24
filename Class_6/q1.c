//WAP to find largest among 2 using turnary operators

#include <stdio.h>

int main(){
int a,b,d;
printf("Enter 2 numbers: ");
scanf("%d %d",&a,&b);
d = (a > b) ? a : b;
printf("%d is largest",d);
return 0;}


//Output
/*
Enter 2 numbers: 2 4
4 is largest

Enter 2 numbers: 5 2
5 is largest
*/
