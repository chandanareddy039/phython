/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main()
{
    int num1,num2;
    float result;
    char ch;    
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choice (+,-,*,/,%): ");
    scanf(" %c",&ch);
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            printf("addition of %d",result);
            break;
            
        case '-':
            result=num1-num2;
            printf("substrsction of %d",result);
            break;
         
        case '*':
            result=num1*num2;
            printf("multiplication of %d",result);
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            printf("division of %d",result);
            break;
    
        default:
            printf("Invalid operation.\n");
    }}
 
    
