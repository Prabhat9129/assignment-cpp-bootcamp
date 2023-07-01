// Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>

int main()
{
    char a;
    printf("Enter a Character: ");
    scanf("%c",&a);
    printf("ASCII code of Character %c is : %d",a,a);

    return 0;
}