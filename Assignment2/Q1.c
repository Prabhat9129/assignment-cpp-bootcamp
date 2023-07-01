// Write a program to print unit digit of a given number

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf(" %d",&a);
    printf("Entered number is: %d \nUnit Digit of number %d is: %d ",a,a,a%10);
    return 0;
}