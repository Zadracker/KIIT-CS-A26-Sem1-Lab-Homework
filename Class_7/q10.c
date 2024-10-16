#include <stdio.h>
int main()
{int row,col,space,count=1;
for (row=1;row<=4;row++)
    {for(space=1;space<=4-row;space++)
        {
         printf(" ");
        }
    for(col=1;col<=row;col++) 
       {
           printf("%d ",count++);
       }
    printf("\n");
    }
return 0;
}

//Output
/*
   1 
  2 3 
 4 5 6 
7 8 9 10 
*/