/*Write a program to print size of an int, a float, a char and a double type variable*/

#include<stdio.h>

int main()
{
    int a,b;
    char e;
    float c;
    double d;

    a=sizeof(b);
    printf("\nSize of integer is: %d",a);
    a=sizeof(e);
    printf("\nSize of Character is: %d",a);
    a=sizeof(c);
    printf("\nSize of Float is: %d",a);
    a=sizeof(d);
    printf("\nSize of Double is: %d",a);
    return 0;
}