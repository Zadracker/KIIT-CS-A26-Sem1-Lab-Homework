//Find sum of all elements in 3x3 matrix

#include <stdio.h>
int main(){
int i,j,a[3][3],s=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("Enter element for a[%dx%d]: ",i+1,j+1);
    scanf("%d",&a[i][j]);
}}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
s=s+a[i][j];
}}
printf("Sum: %d",s);
return 0;}

//Output
/*
Enter element for a[1x1]: 1
Enter element for a[1x2]: 2
Enter element for a[1x3]: 3
Enter element for a[2x1]: 4
Enter element for a[2x2]: 5
Enter element for a[2x3]: 6
Enter element for a[3x1]: 7
Enter element for a[3x2]: 8
Enter element for a[3x3]: 9
Sum: 45
*/