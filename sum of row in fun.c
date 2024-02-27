//sum of each row in 2d array using fxn:
#include<stdio.h>

void add(int arr[][100],int r, int c)
{
    int i,j;
for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("\nsum of row is :%d",sum);
    }
return ;
    
}
int main()
{
    int arr[100][100],r,c,i,j,sumrow;
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
   add(arr,r,c);
    return 0;
}
