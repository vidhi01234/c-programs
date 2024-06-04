#include <stdio.h>
typedef struct student
{
    int id;
    char nm[20];
    int yoe;
    float sal;
}student;
int main()
{
    student s[50];
    int i,n;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter the elements of data\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d%f\n",&s[i].id,s[i].nm,&s[i].yoe,&s[i].sal);
    }
    for(i=0;i<n;i++)
    {
        if(s[i].yoe>15)
        {
            s[i].sal=s[i].sal+s[i].sal*0.15;
        }
        else if (s[i].yoe>=10&&s[i].yoe<=15)
        {
            s[i].sal=s[i].sal+s[i].sal*0.10;
        }
        else
        {
            s[i].sal=s[i].sal+s[i].sal*0.5;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d,%s,%d,%f\n",s[i].id,s[i].nm,s[i].yoe,s[i].sal);
    }

    return 0;
}
/*
enter n: 2
enter the elements of data
12
xyz
10
100
15
abc
20
100
12,xyz,10,110.000000
15,abc,20,115.000000
*/
