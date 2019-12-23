#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf",&x);
    if(x!=10)
    {
        printf("f(%.1lf) = %.1f",x,x);
     }
    else if(x==10)
      {
        y=(double)1/x;
        printf("f(%.1lf) = %.1lf",x,y);
        }
    return 0;
}
