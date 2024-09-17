//Calculate gross salary of an employee taking input as basic salary

#include <stdio.h>
int main(){
float bs,da,hra,gs;
printf("Enter the basic salary: ");
scanf("%f",&bs);
if (bs>15000){
    da=(0.15)*bs;
    hra=(0.20)*bs;
} else {
    da=(0.10)*bs;
    hra=(0.15)*bs;
}
gs=bs+da+hra;
printf("Gross salary: %.2f",gs);
return 0;}

//Output
/*
Enter the basic salary: 20000
Gross salary: 27000.00

Enter the basic salary: 10000
Gross salary: 12500.00
*/