#include <stdio.h>

int main()
{
    int i,a;
    double sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+(double)1/i;
    }
    printf("sum = %.6lf",sum);
}

