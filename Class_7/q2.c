//Find all prime number in b/w 1 to 20

#include <stdio.h>
int main(){
int a;
for (a=2;a<=20;a++){
    int b=1;
    for (int i=2;i<a;i++){
        if (a%i==0){
            b=0;   
            break;
        }     
    } 
    if(b==1){printf("\n%d",a);} else {}
}
return 0;}

//Output
/*
2
3
5
7
11
13
17
19
*/