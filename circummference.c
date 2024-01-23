#include<stdio.h>
int main()
{
    float r, area, circum;
    printf("Input radius of the circle:");
    scanf("%2f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("The area and circumference of a circle is:%f,%f",area, circum);
    return 0;
}