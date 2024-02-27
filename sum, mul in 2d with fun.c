//sum product of 2d using f(x)n
#include<stdio.h>

int add(int arr[][100], int r, int c)
{
    int i,j,addition=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            addition=addition+arr[i][j];
        }
    }
    return addition ;
}
    
   
int pro(int arr[][100], int r, int c)
{
    int i,j,pro=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            pro=pro*arr[i][j];
        }
    }
    return pro ;
}
 
    
int main()
{
    int arr[100][100],i,j,r,c,sum,product;
    printf("enter rows and colums :");
    scanf("%d%d",&r,&c);
    printf("enter array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nelement :");
            scanf("%d",&arr[i][j]);
        }
    }
    sum=add(arr,r,c);
    product=pro(arr,r,c);
    printf("sum of all elements of array is : %d",sum);
    printf("\nproduct of all elements of array is : %d",product);
    return 0;
}
