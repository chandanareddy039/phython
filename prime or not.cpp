/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{
int n, i, count = 0;
printf("Enter number");
scanf("%d",&n);
for(i=2; i<=n/2; ++i)
{
if(n%i==0)
{
count=1;
break;
}
}
if (count==0)
printf("%d is a prime number",n);
else
printf("%d is not a prime number",n);
 getch();    
}

