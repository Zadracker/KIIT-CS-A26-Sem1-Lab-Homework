//WAP to find the largest of 3 numbers using logical operators

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c){printf("%d is largest",a);}
if (b>a && b>c){printf("%d is largest",b);}
if (c>a && c>b){printf("%d is the largest"),c;}
return 0;}

//Output
/*
Enter 3 numbers: 6 7 8
8 is the largest

Enter 3 numbers: 8 9 5
9 is largest

Enter 3 numbers: 9 0 8
9 is largest
*/