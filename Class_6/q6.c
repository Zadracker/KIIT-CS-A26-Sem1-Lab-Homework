//find the sum of all odd numbers between 1 to 50

#include <stdio.h>
int main(){
int a=1;
int sum = 0;
while (a<=50){
    sum = sum+a;
    a=a+2;
}
printf("%d",sum);
return 0;}

//Output
// 625