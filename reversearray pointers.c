#include <stdio.h>
void reverse(int*,int);
int main()
{
    int a[10],i,j,n,*p;
    printf("enter range:");
    scanf("%d",&n);
    p=a;
    puts("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    reverse (a,n);

    return 0;
}
void reverse(int*p,int n)
{
    int i,j,t=0;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}
