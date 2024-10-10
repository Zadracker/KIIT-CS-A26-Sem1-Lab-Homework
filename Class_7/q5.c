//Accept a number and test if number is perfect number or not

#include<stdio.h>
int main(){
int a,b,c,d=0,e,f,g;
printf("Enter number: ");
scanf("%d",&a);
while(a>0){
    for(int i=1;i<a;i++){
        if(a%i==0){
            d=d+i;
        }
    }
break;
}
if (d==a){
    printf("Perfect number");
} else {printf("Not Perfect number");}
return 0;}

//Output
/*
Enter number: 6
Perfect number

Enter number: 7
Not Perfect number

Enter number: 28
Perfect number
*/