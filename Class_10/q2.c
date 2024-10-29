//Input 3x3 matrix and display diagnol elements

#include <stdio.h>
int main(){
int i,j,a[3][3];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("Enter element for %dx%d: ",i+1,j+1);
    scanf("%d",&a[i][j]);
}}
printf("\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    if (i==j){printf("%d\t",a[i][j]);}
}}
return 0;}

//Output
/*
Enter element for 1x1: 1
Enter element for 1x2: 2
Enter element for 1x3: 3
Enter element for 2x1: 4
Enter element for 2x2: 5
Enter element for 2x3: 6
Enter element for 3x1: 7
Enter element for 3x2: 8
Enter element for 3x3: 9

1       5       9
*/