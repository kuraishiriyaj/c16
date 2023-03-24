#include<stdio.h>
/* write a program in c to accept a matrix and determine whether it 
is a spare matrix ?
*/
int main()
{
int  a[3][3];
int i,j;
int counter=0;
printf("enter is the elements of the matrix is:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);

        
    }
}
printf("matrix is:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
}
printf("\ncheck matrix is sparce or not\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(a[i][j]==0)
        {
            counter++;
        }
    }
}
if(counter>9/2)
  printf("this is sparce matrix:\n");
  else
  {
  printf("this is not sparce matrix:\n");
  }
  
    return 0;
}