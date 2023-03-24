#include<stdio.h>
/* write a program in c to find the row with maximum number of 1 s ?
*/
int main()
{

 int a[3][3]={{0,1,0,},{0,0,0},{1,1,1}};
 int i,j;
 int counter=0;
 int max=0;
 for(i=0;i<3;i++)
 {
    counter=0;
    for(j=0;j<3;j++)
    {
        if(a[i][j]==1)
        {
            counter++;
        }
    }
    max=counter;
    if(max<counter)
    {
        max=counter;
    }
 }
 printf("maximum number of row is:%d",max);
    return 0;
}
