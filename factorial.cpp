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
    int n,i,f=1;
    
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     
    printf("\n The Factorial of %d is %d",n,f);
    getch();
}
