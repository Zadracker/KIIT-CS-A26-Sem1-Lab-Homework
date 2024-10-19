//1+(x^2/1!)-(x^2/3!)
// x=2.1, n=3

#include <stdio.h>
int main(){
float x=2.1,c=1,b;
int n,f,d;
printf("Enter n: ");
scand("%d",&n);
if (n<=0){
    printf("Invalid");
} else {
    while (n>0){
        d=n;
        f=1;
        while(d>0){
            int q;
            q=d;
            f=f*q;
            d--;
        }
        b=((x*x)/f);
        if(n%2==0){
            c=c+b;
        } else {
            c=c-b;
        }
        n--;
    }
}
printf("%f",c);
return 0;}