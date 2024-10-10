//Accept a number and test whether it is a palindrome or not

#include <stdio.h>
int main(){
int a,b,c=0,d;
printf("Enter number: ");
scanf("%d",&a);
d=a;
while (a>0){
b=a%10;
a=a/10;
c=c*10+b;
}
if (c==d){
    printf("Palindrome");
} else {printf("Not Palindrome");}
return 0;}

//Output
/*
Enter number: 7856
Not Palindrome

Enter number: 787
Palindrome
*/