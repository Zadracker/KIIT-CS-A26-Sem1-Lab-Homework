//WAP to assign time as seconds and convert it into corresponding minutes and hours

#include <stdio.h>
int main() {
int seconds=6000;
float minute, hour;
minute= seconds/60;
hour= minute/60;
printf("Conversion into minutes: %f minutes\n",minute);
printf("Conversion into hours: %f hours\n",hour);
return 0;
}

//Output
// Conversion into minutes: 100.000000 minutes
// Conversion into hours: 1.666667 hours