#include <stdio.h>
void sort(int*,int);
int main()
{
    int a[10],i,n,*p;
    printf("enter range");
    scanf("%d",&n);
    p=a;
    puts("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    
    sort(a,n);

    return 0;
}
void sort(int*p,int n)
{
    int i,j,t=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(*(p+j)<*(p+j+1)) 
           {
               t=*(p+j);
               *(p+j)=*(p+j+1);
               *(p+j+1)=t;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
    
}
