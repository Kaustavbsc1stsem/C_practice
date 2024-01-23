#include<stdio.h>
int main()
{
    int n, count=0;
    printf("Input number");
    scanf("%d",&n);
    while(n!=0)
    { 
        n/=10;
        count++;
    }
    printf("%d has %d digits",n,count);
    return 0;
}