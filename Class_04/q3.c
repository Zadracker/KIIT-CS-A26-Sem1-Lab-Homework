//WAP to calculate electric bill using the LMR and CMR

#include <stdio.h>
int main() {
float LMR=500;
float CMR, units, bill;
printf("Last Meter Reading (LMR): %.1f\n",LMR);
printf("Enter Current Meter Reading (CMR): ");
scanf("%f", &CMR);
units = CMR - LMR;
if (units < 0) {
    printf("Invalid readings: Current Meter Reading must be greater than Last Meter Reading.\n");
    return 1;
}
bill = 150.0;
if (units <= 50) {
    bill += units * 5.0;
} else if (units <= 200) {
    bill += (50 * 5.0) + ((units - 50) * 6.5);
} else if (units <= 400) {
    bill += (50 * 5.0) + (150 * 6.5) + ((units - 200) * 7.5);
} else {
    bill += (50 * 5.0) + (150 * 6.5) + (200 * 7.5) + ((units - 400) * 8.5);
}
printf("Electricity Bill: %.1f\n", bill);
return 0;}

//Output
/*
Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 550
Electricity Bill: 400.0

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 650
Electricity Bill: 1050.0

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 800
Electricity Bill: 2125.0

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 1200
Electricity Bill: 4875.0

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 400
Invalid readings: Current Meter Reading must be greater than Last Meter Reading.

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 700
Electricity Bill: 1375.0

Last Meter Reading (LMR): 500.0
Enter Current Meter Reading (CMR): 551
Electricity Bill: 406.5

*/
