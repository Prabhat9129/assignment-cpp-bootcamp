/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/12

#include<stdio.h>
int main()
{
   float a;
   float r;
   printf("Enter Radius of Circle: ");
   scanf("%f",&r);
    a =  3.14*r*r;
   printf("\"Area of Circle is %f having the Radius %f\"",a,r);
    return 0;
}