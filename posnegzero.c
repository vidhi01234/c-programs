#include <stdio.h>

int main()
{
        int a[10][10],i,j,m,n,p=0,nn=0,z=0;  //p=positive digit,n=negative digit,z=zero
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
           if(a[i][j]>0)
           {
               p++;
           }
           else if(a[i][j]<0)
           {
               nn++;
           }
           else
           {
               z++;
           }
        }
    }
    printf("positive digit is%d\nnegative digit is%d\nzero is %d",p,nn,z);
 

    return 0;
}
