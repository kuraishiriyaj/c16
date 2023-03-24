#include<stdio.h>
/* write a program in c to print or display the lower
triguler of a given matrics ?
*/
int main()
{
    int a[3][3]={{3,6,2},{5,2,6},{3,6,3}};
    int i,j;
    printf("matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nlower tringle of the given matrics\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>=j)
            {
                printf(" %d ",a[i][j]);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}