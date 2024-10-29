//Accept a number and check if it is Angstrom or not

#include <stdio.h>
#include<math.h>
int main(){
int a,b,c,d=0,e,f,g;
printf("Enter number: ");
scanf("%d",&a);
g=a;
while (a>0){
b=a%10;
a=a/10;
c=c*10+b;
d++;
}
while(c>0){
    b=c%10;
    e=pow(b,d);
    f+=e;
    c=c/10;
}
if(g==f){
    printf("Armstrong number");
} else {printf("Not Armstrong number");}
return 0;}

//Output
/*
Enter number: 9474
Armstrong number

Enter number: 371
Armstrong number

Enter number: 89
Not Armstrong number
*/