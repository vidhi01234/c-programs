#include <stdio.h>
int main()
{
    int num,n,ce=0,co=0,i;
    FILE *fp,*fe,*fo;
    fp=fopen("hello.txt","w");
    printf("enter the no of elements to store");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    fp=fopen("hello.txt","r");
    fe=fopen("even.txt","w");
    fo=fopen("odd.txt","w");
    for(i=0;i<n;i++)
    {
        num=getw(fp);
        if(num%2==0)
        {
            putw(num,fe);
            ce++;
        }
        else
        {
            putw(num,fo);
            co++;
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
    fe=fopen("even.txt","r");
    printf("enter elements");
    for(i=0;i<=ce;i++)
    {
        num=getw(fe);
        printf("%d\n",num);
        
    }
    fclose(fe);
    fo=fopen("odd.txt","r");
    printf("enter elements");
    for(i=0;i<=co;i++)
    {
        num=getw(fo);
        printf("%d\n",num);
    }
    fclose(fo);

    return 0;
}
/*
enter the no of elements to store6
10
15
14
19
17
12
enter elements10
14
12
-1
enter elements15
19
17
-1
*/
