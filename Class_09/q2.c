//Display an array in reverse order

#include <stdio.h>
int main(){
int i,a[10]={0,1,2,3,4,5,6,7,8,9};
printf("The reverse set is [");
for(i=9; i>0; i--){
    printf("%d,",a[i]);
}
printf("]");
return 0;}

//Output
/*
The reverse set is [9,8,7,6,5,4,3,2,1,]
*/