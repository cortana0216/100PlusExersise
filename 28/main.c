#include <stdio.h>

double fact(int n)
{
    int t=n;
    while(t>1)
    {
        n=n*(t-1);
        t--;
    }
    return n;
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("result = %.0f",fact(n)/(fact(m)*fact(n-m)));
    return 0;
}
