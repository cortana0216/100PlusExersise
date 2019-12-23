#include <stdio.h>

int main()
{
    int m,e,c,a;
    printf("math = ");
    scanf("%d",&m);
    printf("eng = ");
    scanf("%d",&e);
    printf("comp = ");
    scanf("%d",&c);
    a=(m+e+c)/3;
    printf("average = %d", a);
    return 0;
}
