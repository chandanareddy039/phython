/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
int i,n,a=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    a=(a*10)+3;
    printf("%d",a);
    if(i<n)
    printf("+");
}}
