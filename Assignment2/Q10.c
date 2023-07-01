/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("last digit of number is %d",x%10);
    x=x-x%10;
    printf("\n Number with last digit zero is %d",x);

    return 0;
}