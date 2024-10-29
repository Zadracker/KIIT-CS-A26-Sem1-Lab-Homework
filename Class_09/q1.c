//WAP to accept any 10 integers to an array and display the set

#include <stdio.h>
int main(){
int i,a,b[10]={};
for (i=0; i<10; i++){
printf("Enter number: ");
scanf("%d",&a);
b[i]=a;
}
printf("The set is [");
for(i=0; i<10; i++){
    printf("%d,",b[i]);
}
printf("]");
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
The set is [0,1,2,3,4,5,6,7,8,9,]
*/