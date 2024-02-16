int main()
{
    int a[10][10],i,j,m,n,max=a[0][0],min=a[0][0];
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
            if(max<a[i][j])
            {
                max=a[i][j];
            }
            if(min>a[i][j])
            {
                min=a[i][j];
            }
        }
    }
    printf("largest value is%d\nsmallest value is%d",max,min);
    return 0;
}
