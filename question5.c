#include<stdio.h>
/* write a program in c to find the sum of the left diagonals
of the matrics?
*/
int main()
{
int sum=0;
int a[3][3]={{6,3,7},{7,3,7},{9,3,3}};
printf("the matrics is:\n");
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}
printf("sum of the left diagoanls of the matrics is:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        sum=a[i][j]+sum;
    }
}
printf("%d",sum);
    return 0;
}