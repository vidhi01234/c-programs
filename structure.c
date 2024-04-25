#include<stdio.h>
struct customer
{
 int cust_id;
 char nm[30];
 float bal;
};
int main()
{
struct customer c[10];
int i,n;
printf("enter number of data stored");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("enter customer_id,name,balance for %d\n",i+1);
 scanf("%d%s%f",&c[i].cust_id,c[i].nm,&c[i].bal);
}
for(i=0;i<n;i++)
{
 printf("customer_id:%d,name:%s,balance:%f\n",c[i].cust_id,c[i].nm,c[i].bal);
}
return 0;
}
