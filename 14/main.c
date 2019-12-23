#include <stdio.h>
#include <math.h>
int main()
{
    int m,y;
    double r,i;
    printf("money = ");
    scanf("%d",&m);
    printf("year = ");
    scanf("%d",&y);
    printf("rate = ");
    scanf("%lf",&r);
    i=m*pow(1+r,y)-m;
    printf("interest = %.2lf",i);
    return 0;
}
