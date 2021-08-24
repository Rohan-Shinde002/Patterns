/*PROGRAM TO PRINT FOLLOWING PATTERN

     1 
    2 3 
   4 5 6 
  7 8 9 10 
 11 12 13 14 15

*/
#include <stdio.h>

int main()
{
    int i,j,k=5,m,c=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=k; j++)
        {
            printf(" ");
        }
        for(m=1; m<=i; m++)
        {
            c++;
            printf("%d",c);
            printf(" ");
        }
        printf("\n");
        k=k-1;
    }
      
    return 0;
}