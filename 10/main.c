#include <stdio.h>

int main()
{
    int a,x,y,z;
    scanf("%d",&a);
    x=a%10;
    printf("整数152的个位数字是%d,",x);
    a/=10;
    y=a%10;
    printf("十位数字是%d,",y);
    a/=10;
    z=a%10;
    printf("百位数字是%d",z);
    return 0;
}
