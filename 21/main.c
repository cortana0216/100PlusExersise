#include <stdio.h>

int main()
{
    int i,sum=0,a;
    scanf("%d",&a);
    for(i=a;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d",sum);
}
