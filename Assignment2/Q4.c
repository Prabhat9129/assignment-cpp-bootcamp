// Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a is: ");
    scanf("%d",&a);
    printf("Enter value of b is: ");
    scanf("%d",&b);
    printf(" value of a is %d \n value of b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap value of a is %d \nSwap value of b is %d",a,b);
    return 0;
}