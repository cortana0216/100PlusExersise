#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    double sum=0;
    for(i=100;i<=1000;i++)
    {
        sum =sum+sqrt(i);
    }
    printf("sum = %.2f",sum);
    return 0;
}
