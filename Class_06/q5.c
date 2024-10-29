//Find the sum of all integer in b/w 1 to 200

#include <stdio.h>

int main(){
int a=1;
int sum = 0;
while (a<=200){
    if (a%5==0){
        sum = sum+a;
    }
    a++;
}
printf("%d",sum);
return 0;}

//Output
//4100