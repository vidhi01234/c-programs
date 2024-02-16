/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Name    :Vidhi Srivastava
Roll no :40
Section :F
1-1/3+1/5-1/7+1/9..............upto n terms.
*/
#include <stdio.h>
double seriessum(int);
int main()
{
   int n;
   printf("***********INPUT*************\n");
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 double result = seriessum(n);
 printf("*************OUTPUT***************\n");
 printf("Sum of the series up to %d terms: %.4f\n",n,result);
 return 0;
}
double seriessum(int n) 
{
 double sum=0;
 int sign=1; 
 double denominator=1;
 for (int i=0;i<n;i++)
 {
   double term = 1/denominator;
   if (sign==1)
   {
     sum=sum+term;
   
   } 
   else
   {
     sum=sum-term;
   }
   sign =sign*( -1); 
   denominator=denominator+2;
 }
  return sum;
  return 0;
}
