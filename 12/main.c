#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf",&x);
    if(x!=0)
    {
        y=1/x;
        printf("f(%.2f) = %.1f",x,y);
     }
    else if(x==0)
        printf("f(%.2f) = 0.0",x);
    return 0;
}
