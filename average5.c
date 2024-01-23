#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg;
    printf("Enter five numbers:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("The average of five numbers:%f\n",avg);
    return 0;
}