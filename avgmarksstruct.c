#include <stdio.h>
typedef struct student{
    char nm[50];
    int age;
    float marks;
} student;
int main()
{
    student s[30];
    int i,n ;
    float sum;
    printf("enter no of data:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the data of name,age,marks of %d\n",i+1);
        scanf("%s%d%f",s[i].nm,&s[i].age,&s[i].marks);
    }
    for(i=0;i<n;i++)
    {
        printf("name:%s,age:%d,marks:%f\n",s[i].nm,s[i].age,s[i].marks);
    }
    for(i=0;i<n;i++)
    {
         sum=sum+s[i].marks;
    }
    printf("average of marks is %f",sum/n);

    return 0;
}

/*
enter no of data:3
enter the data of name,age,marks of 1
vidhi
19
50
enter the data of name,age,marks of 2
anshika
20
20
enter the data of name,age,marks of 3
chandni
20
20
name:vidhi,age:19,marks:50.000000
name:anshika,age:20,marks:20.000000
name:chandni,age:20,marks:20.000000
average of marks is 30.000000
*/
