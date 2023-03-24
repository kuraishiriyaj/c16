#include<stdio.h>
/* write a program in c to print or display an upper trianguler matrics ?
 
*/
int main()
{
 int a[3][3];
 int i,j;
 printf("enter is the elements of the matrix:\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
 }
 printf("\n matrix is:\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %d ",a[i][j]);
    }
    printf("\n");
 }
 printf("\nupper tringles matrix:\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        if(i<=j)
        {
            printf("%d",a[i][j]);
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