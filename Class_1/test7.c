//WAP to assign length as centimeter and convert it into corresponding meter and kilometer

#include <stdio.h>
int main() {
int a,b,c,d,e,avg;
int centimeter=200;
float meter,kilometer;
meter=centimeter/100;
kilometer=meter/1000;
printf("Conversion into meters: %f meters\n",meter);
printf("Conversion into kilometers: %f kilometers\n",kilometer);
return 0;
}

//Output
/*
Conversion into meters: 2.000000 meters
Conversion into kilometers: 0.002000 kilometers
*/