#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("pow(%d,0) = %.0f\n",a,pow(a,0));
    printf("pow(%d,1) = %.0f\n",a,pow(a,1));
    printf("pow(%d,2) = %.0f\n",a,pow(a,2));
    printf("pow(%d,3) = %.0f",a,pow(a,3));
    return 0;
}
