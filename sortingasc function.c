#include <stdio.h>
void sort(int[],int);
int main()
{
    int a[10],i,n;
    printf("enter range");
    scanf("%d",&n);
    puts("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    sort(a,n);

    return 0;
}
void sort(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(a[j]>a[j+1])
           {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
}

