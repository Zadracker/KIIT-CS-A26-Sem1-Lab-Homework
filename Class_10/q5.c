//check if 2 matrix are the same

#include <stdio.h>
int main(){
int i,j,a[3][3],b[3][3],f=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("Enter element for a[%dx%d]: ",i+1,j+1);
    scanf("%d",&a[i][j]);
}}
printf("\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("Enter element for b[%dx%d]: ",i+1,j+1);
    scanf("%d",&b[i][j]);
}}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if((a[i][j])!=(b[i][j])){f=1;}
}}
if(f==0){printf("Both matrix are same");}
else {printf("matrix are different");}
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

Enter element for b[1x1]: 1
Enter element for b[1x2]: 2
Enter element for b[1x3]: 3
Enter element for b[2x1]: 4
Enter element for b[2x2]: 5
Enter element for b[2x3]: 6
Enter element for b[3x1]: 7
Enter element for b[3x2]: 8
Enter element for b[3x3]: 9
Both matrix are same
*/