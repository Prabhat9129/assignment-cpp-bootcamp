// Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main()
{
    int x=9,count=0;
    int result=0;
    printf("Enter a number: ");
    scanf("%d",&x);

    while(x!=0)
    {
        result=x&1;
        count++;
        if(result==1)
        {
            printf("position of 1 in LSB is %d\n",count);
            break;
        }
       x= x>>1;
    }

    return 0;
}