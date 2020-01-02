/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float h;
    printf("enter the height");
    scanf("%f",&h);
    if(h<150)
    {
    if(h<165)
    printf("average height");
    else if(h<190)
    printf("tall");
    else 
    printf("abnormal height");
}
else
{
    printf("dwarf");
    
}}
