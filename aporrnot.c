#include<stdio.h>
int main()
{
  int arr[30],i,t,f=0,n;
  printf("enter range");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  t=arr[1]-arr[0];
  printf("common difference is:%d\n",t);
  for(i=1;i<n-1;i++)
  {
    if((arr[i+1]-arr[i])!=t)
    {
      //printf("%d",arr[i+1]-arr[i]);
      f=1;
      break;
    }
    //printf("not AP");
  }
  if(f==1)
  {
   printf("not AP");
  }
  else
  {
    printf("this is a AP");
  }
  return 0;
 }
