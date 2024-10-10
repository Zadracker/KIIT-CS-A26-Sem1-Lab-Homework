//WAP to accept a number and test if it prime number or not

#include <stdio.h>
int main() {
int a,b;
printf("Enter number: ");
scanf("%d",&a);
for (int i=2; i<a; ++i ){
    if (a%i == 0){
        b=1;
    }
}
if (b==1){
    printf("Composite number");}
else {printf("Prime number");}
return 0;}


//Output
/*
Enter number: 79
Prime number

Enter number: 8
Composite number
*/