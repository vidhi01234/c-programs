#include <stdio.h>

int main()
{
    FILE *fp;
    int c=0,d=0,s=0;
    char str[20],ch;
    fp=fopen("hello.txt","w");
    printf("enter string:\n");
    while(fgets(str,20,stdin)!=NULL)
    {
        fputs(str,fp);
    }
    fclose(fp);
    fp=fopen("hello.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
        {
            c++;
        }
        else if(ch>=48&&ch<=57)
        {
            d++;
        }
        else
        {
            s++;
        }
    }
    fclose(fp);
    printf("\nchar are %d\n",c);
    printf("digit are %d\n",d);
    printf("special char are %d",s);

    return 0;
}
/*
enter string:
hello this is @1234#
char are 11
digit are 4
special char are 5
*/
