// Write a program to swap values of two int variables.

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("value of a is: %d \nvalue of b is: %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n swap value of a is: %d \n swap value of b is: %d",a,b);
    
    return 0;
}