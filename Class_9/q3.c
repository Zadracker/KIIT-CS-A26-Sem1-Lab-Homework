//Find sum of all integers present in the array

#include <stdio.h>
int main(){
int i,a,b[10]={},d=0;
for (i=0; i<10; i++){
printf("Enter number: ");
scanf("%d",&a);
b[i]=a;
}
for(i=0; i<10; i++){
d=d+b[i];
}
printf("Sum: %d",d);
return 0;}

//Output
/*
Enter number: 0
Enter number: 1
Enter number: 2
Enter number: 3
Enter number: 4
Enter number: 5
Enter number: 6
Enter number: 7
Enter number: 8
Enter number: 9
Sum: 45
*/