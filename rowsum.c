#include <stdio.h>

int main()
{
     int a[10][10],i,j,m,n,sum;
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
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of row%d is %d",i+1,sum);
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
          
        }
        printf("\n");
    }
    

    return 0;
}
