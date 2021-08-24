/*PROGRAM TO PRINT FOLLOWING PATTERN

     *
    **
   ***
  ****
 *****
  ****
   ***
    **
     *

*/
#include <stdio.h>

int main()
{
    int i,j,m;
    
    
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        
        for(m=1;m<=i;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {
            printf(" ");
        }
        
        for(m=1;m<=i;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}
