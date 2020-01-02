/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,n1=0,n2=1,i,n3;
    printf("enter the number");
    scanf("%d",&n);
    printf("fibanocii");
    for(i=1;i<=n;i++)
    {
        printf("%d",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}
