//WAP to give the grade of a student when marks in a subject is given

#include <stdio.h>
int main(){
int a;
printf("Enter your marks: ");
scanf("%d",&a);
if (a <= 100 && a>=90){printf("O");}
else if (a < 90 && a>=80){printf("E");}
else if (a < 80 && a>=70){printf("A");}
else if (a < 70 && a>=60){printf("B");}
else if (a < 60 && a>=50){printf("C");}
else {printf("F");}
return 0;}

//Output
/*
Enter your marks: 97
O

Enter your marks: 78
A

Enter your marks: 3
F
*/