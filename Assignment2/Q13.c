/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/

#include<stdio.h>

int main()
{
    int a,f,l;
    printf("Enter a Three digit number: ");
    scanf("%d",&a);
    f=a/10;
    l=a%10;
    a=l*100+f;
    printf("Number after rotation is: %d",a);

    return 0;
}