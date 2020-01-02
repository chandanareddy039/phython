/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
int n,i=1,sum=0;
printf("\n Enter The Number:");
scanf("%d",&n);
while(i<n)
{
     if(n%i==0)
     {
         sum=sum+i;
     }
     i++;
}
if(sum==n)
printf("\n %d is a perfect number",n);
else 
printf("\n %d is not a perfect number",n);
}
