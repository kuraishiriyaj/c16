#include<stdio.h>
/* write a program to calculate the sum of two matrics each of order 3*3?
*/
int main()
{
    int a[3][3]={{1,2,5},{7,3,9},{6,8,4}};
    int b[3][3]={{7,5,3},{8,2,8},{6,2,9}};
    int c[3][3];
    printf("sum of the two matrics\n:");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=a[i][j]+b[i][j];
        
          
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
    }
    

    return 0;
}