/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count;
printf("\n Enter The Number:");
scanf("%d",&n);
while(n>0)
{
     count=count*10+n%10;
    n=n/10;
}
printf("no of digits=%d",count);
}
