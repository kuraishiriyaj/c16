#include<stdio.h>
/* write a program in c to find the sum of right diagoanals of a matrix ?
*/
int main()
{
    int a[3][3]={{6,3,7},{6,3,7},{7,3,2}};
    int i,j;
    int sum=0;
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("sum of the right diagoanls of a matrics is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
             sum=a[i][j]+sum;
        }
    }
    printf("%d",sum);

    return 0;
}