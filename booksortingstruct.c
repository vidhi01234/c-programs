#include<stdio.h>
typedef struct books{
  char title[50];
  char author[50];
  float pri;
  }book;
int main()
{
 book s[30],temp;
 int n,j,i;
 printf("input no of data enter: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the data of title ,author ,prize of :%d\n",i+1);
    scanf(" %[^\n] %[^\n]%f",s[i].title, s[i].author, &s[i].pri);
   }
    for(i=0;i<n;i++)
   {
     for(j=0;j<n-i-1;j++)
     {
       if(s[j].pri>s[j+1].pri)
       {
        temp=s[j];
        s[j]=s[j+1];
        s[j+1]=temp;
       }
      }
    }
     for(i=0;i<n;i++)
    {
     printf("title: %s ,author: %s  ,prize %f\n", s[i].title,s[i].author,s[i].pri);
    }
    
      printf("least expensive book: %s\n", s[0].title);
      printf("most expensive book: %s", s[n-1].title);
    
    return 0;
   }
      
