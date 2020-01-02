/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a;
printf("enter avalue");
scanf("%d",&a);
if(a%3==0){
    if(a%5==0)
printf("fizzbizz");
else
printf("fizz");}
else if(a%5==0)
printf("bizz");
else 
printf("%d",a);
}
