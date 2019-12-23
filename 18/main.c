#include <stdio.h>

int main()
{
    int t11,t12,t21,t22,h,m;
    scanf("%d:%d, %d:%d",&t11,&t12,&t21,&t22);
    h=t21-t11;
    m=t22-t12;
    if(m<0)
    {
        h=h-1;
        m=60+m;
    }
    printf("The train journey time is %d hours %d minutes",h,m);
    return 0;
}
