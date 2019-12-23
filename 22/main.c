#include <stdio.h>

int main()
{
    int i,a,b;
    double sum=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum=sum+(double)1/i;
    }
    printf("sum = %.3lf",sum);
}

