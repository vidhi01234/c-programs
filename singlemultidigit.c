#include <stdio.h>

int main()
{
    int a[10][10],i,j,m,n,sd=0,md=0;  //sd=single digit,md=multiple digit
    printf("enter the rows and column of matrix");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]>9)
           {
               md++;
           }
           else
           {
               sd++;
           }
        }
    }
    printf("single digit is%d\nmultiple digit is%d",sd,md);


    return 0;
}
