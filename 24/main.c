#include <stdio.h>
#include <math.h>

int main()
{
    int i,a;
    double sum=0;
    scanf("%d",&a);
    for(i=1;i<3*a-1;i+=3)
    {
        sum=sum+(double)1/i*pow(-1,i+1);
    }
    printf("sum = %.3lf",sum);
}

