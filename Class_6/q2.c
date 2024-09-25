//WAP to find largest among 3 using turnary operators

#include <stdio.h>
int main(){
int a,b,c,d;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
d = (a > b) ? (a > c ? a: c) : (b>c ? b : c);
printf("%d is largest",d);
return 0;}

//Output
/*
Enter 3 numbers: 1 3 2
3 is largest
*/