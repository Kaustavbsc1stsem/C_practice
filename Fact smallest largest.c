#include<stdio.h>
int fact(int num)
{
    int smallest=num, largest=1;
    for(int i=2;i<=num/2;i++)
    if(num%i==0)
   {

    smallest=i;
    largest=num/i;
    break;
   }
   printf("\nSmallest factor:%d",smallest);
   printf("\nLargest factor:%d",largest);
}
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    fact(number);
    return 0;
}