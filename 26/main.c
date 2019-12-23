#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x,t;
    int n,i;
    scanf("%lf%d",&x,&n);
    t=x;
    for(i=0;i<n;i++)
    {
        x=x*t;
    }
    printf("%lf",x);
    return 0;
}
