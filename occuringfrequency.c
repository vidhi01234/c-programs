include <stdio.h>
int main()
{
 int arr[30],i,n,j,k,c;
 printf("enter range");
 scanf("%d",&n);
 printf("\nenter elements:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
   printf("\n%d",arr[i]);
 }
 for(i=0;i<n;i++)
 {
   c=1;
   for(j=i+1;j<n;j++)
   {
     if(arr[i]==arr[j])
     { 
       c++;
       for(k=j;k<n;k++)
       {
         arr[j]=arr[j+1];
       }
       n--;
     }
   }
   printf("\nfrequency of %d is %d\n",arr[i],c);
 }
 return 0;
}
