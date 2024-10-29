//WAP to input the temperature in celsius scale and convert it into fahrenheit

#include <stdio.h>
int main(){
float celsius,fahrenheit;
printf("Enter the temperature in celsius: ");
scanf("%f",&celsius);
fahrenheit=(celsius*1.8)+32;
printf("The temperatiure in fahrenheit is %f",fahrenheit);
return 0;}

//Output
/*
Enter the temperature in celsius: 26.7
The temperatiure in fahrenheit is 80.059998
*/