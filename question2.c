#include<stdio.h>
# define N 50
/* write a program to calculate the product of two matrics
each of order 3*3?
*/
int main()
{
    int a[N][N],b[N][N],c[N][N];
    int i,j,k,m,n,p,q,sum;
    printf("\nenter rows and column first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("enter is the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
  printf("\nenter rows and column second matrix:\n");
  scanf("%d%d",&p,&q);
  printf("enter is the second matrix:\n");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
        scanf("%d",&b[i][j]);
    }
  }
 
  printf("\n first matrix is:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
  }
   printf("\n first matrix is:\n");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
        printf(" %d ",b[i][j]);
    }
    printf("\n");
  }
if(m!=q)
{
    printf("con not multiply\n");
}
else
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            sum=0;
            for(k=0;k<m;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
        printf("\n");
    }
}
printf("multiply is:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<q;j++)
    {
        printf(" %d ",c[i][j]);
    }
    printf("\n");
}
return 0;
}