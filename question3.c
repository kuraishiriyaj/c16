#include<stdio.h>
/* write a program in c to find the transpose of a given matrix?
*/
int main()
{
    int a[3][3]={{5,3,6},{8,5,8},{9,3,6}};
    printf("transpose of the matrix is\n");
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[j][i]);

        }
        printf("\n");
    }


    return 0;
}