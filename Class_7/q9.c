//WAP to find the sum 1+(1/2)-(1/3)+(1/4)-(1/5)......+(1/n)

#include <stdio.h>
int main(){
float a,b=1;
int c;
printf("Enter: ");
scanf("%f",&a);
if (a>1){ 
    while (a>1){
        c=a;
        if(c%2==0){        
        b=b+(1/a);
        a--;
} else {
        b=b-(1/a);
        a--;}
}
printf("%f",b);
}else if (a==1){printf("1");}
else { printf("Invalid");}
return 0;}

//Output
/*
Enter: 1
1

Enter: -2
Invalid

Enter: 5
1.216667
*/