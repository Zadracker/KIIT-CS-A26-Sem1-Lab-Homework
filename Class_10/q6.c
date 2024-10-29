//Transpose Matrix

#include <stdio.h>
int main(){
int i,j,a[3][3],b[3][3];
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("Enter element for a[%dx%d]: ",i+1,j+1);
    scanf("%d",&a[i][j]);
}}
printf("\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    b[i][j]=a[j][i];
}}
printf("\nNormal\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\nTranspose\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    printf("%d\t",b[i][j]);
}
printf("\n");
}
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


Normal
1       4       7
2       5       8
3       6       9

Transpose
1       4       7
2       5       8
3       6       9
*/