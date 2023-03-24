#include<stdio.h>
/* write a program in c to find sum of the rows and colums of a matrics?
*/
int main()
{
    int a[3][3]={{3,6,3},{3,6,6},{6,3,7}};
    int i,j;
    int rows,columns;
    printf("matrics is:\n");
    for(i=0;i<3;i++)
    {
        rows=0;
        columns=0;
        for(j=0;j<3;j++)
        {
            rows=rows+a[i][j];
            columns=columns+a[j][i];
        }
          printf("rows=%d,columns=%d\n",rows,columns);
        

        
    }

    return 0;
}