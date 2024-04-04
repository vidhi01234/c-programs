#include<stdio.h>
#include<string.h>
int main()
{
 int l,i,j,l2;
 char str[20],str2[20];
 puts("enter string");
 fgets(str,20,stdin);
 puts("enter string 2");
 fgets(str2,20,stdin);
 l=strlen(str);
 l2=strlen(str2);
 str[l-1]=' ';
 for(i=l,j=0;i<(l+l2);i++,j++)
 {
  str[i]=str2[j];
 }
 str[l+l2]='\0';
 puts(str);
 return 0;
}
