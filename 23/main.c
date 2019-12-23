#include <stdio.h>

int main()
{
    int i,a;
    double sum=0;
    scanf("%d",&a);
    for(i=1;i<2*a;i+=2)
    {
        sum=sum+(double)1/i;
    }
    printf("sum = %.6lf",sum);
}

