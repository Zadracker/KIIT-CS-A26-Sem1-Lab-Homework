//Find largest number out of 3

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c){printf("%d is largest"),a;}
if (b>a && b>c){printf("%d is largest"),b;}
if (c>a && c>b){printf("%d is largest"),c;}
return 0;}

//Output
/*
Enter 3 numbers: 1 2 3
3 is largest

Enter 3 numbers: 2 3 1
3 is largest

Enter 3 numbers: 3 2 1
3 is largest
*/