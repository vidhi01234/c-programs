#include <stdio.h>

int main()
{
    int a[10][10],i,j,m,n,count=0;
    printf("enter the rows and column of matrix");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>0&&a[i][j]%2==0)
            {
                count++;
            }
        }
    }
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>0&&a[i][j]%2==0)
            {
                count++;
            }
        }
    }*/
    printf("total value is%d",count);
    return 0;
}
