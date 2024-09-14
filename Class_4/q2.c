//WAP to find the largest of 3 numbers using if-else-if

#include <stdio.h>
int main(){
int a,b,c;
printf("Enter 3 numbers: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
    if (a>c){printf("%d is the largest",a);}
    else {printf("%d is the largest",c);}
}
else if (b>a){
    if (b>c){printf("%d is the largest",b);}
    else{printf("%d is the largest",c);}
}
return 0;}

//Output
/*
Enter 3 numbers: 3 4 7
8 is the largest

Enter 3 numbers: 2 3 4
4 is the largest

Enter 3 numbers: 4 3 2
4 is the largest
*/