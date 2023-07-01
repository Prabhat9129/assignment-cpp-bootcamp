/* Write a program to check whether the given number is even or odd using a bitwise
operator.*/

#include<stdio.h>
int main()
{
    int a,result=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    result=a&1;
    if(result==1)
    {
        printf("Number %d is Odd",a);
    }
    else
    {
        printf("Number %d is Even ",a);
    }

    return 0;
}