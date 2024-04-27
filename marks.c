#include<stdio.h>
typedef struct student{
  char nm[30];
  int age;
  float marks;
 } student;
 int main ()
 {
  student s[40],temp;
  int n,j,i;
  printf("input no of data enter: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the data of name ,age ,marks of :%d\n",i+1);
    scanf(" %[^\n]%d%f",s[i].nm, &s[i].age, &s[i].marks);
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n-i-1;j++)
     {
       if(s[j].marks>s[j+1].marks)
       {
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
       }
      }
    }
    for(i=0;i<n;i++)
    {
     printf("name: %s ,age: %d  ,marks %f\n", s[i].nm,s[i].age,s[i].marks);
    }
    return 0;
   }
