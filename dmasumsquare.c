#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,i,n,c=0,f=0;
    printf("enter n: ");
    scanf("%d",&n);
    p=(int*)malloc(n* sizeof(int));
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        c=*(p+i)* *(p+i);
        f=f+c;
    }
    printf(" sum of square of elements %d",f);

    return 0;
}
/*
enter n: 5
enter elements
1
2
3
4
5
 sum of square of elements 55
 */
