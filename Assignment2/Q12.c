/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>

int main()
{
    float x;
    printf("Enter price in INR: ");
    scanf("%f",&x);
    x=1/76.23*x;
    printf("INR in USD is %f",x);
    
    return 0;
}