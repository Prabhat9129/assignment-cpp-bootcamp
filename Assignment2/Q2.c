// Write a program to print a given number without its last digit.

#include <stdio.h>

int main(){
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Entered number is %d \nNumber %d without it's last digit is : %d",a,a,a/10);
    return 0;
}