#include <stdio.h>

int main()
{
    int low,up;
    scanf("%d %d",&low,&up);
    printf("%d %.1lf\n%d %.1lf",low,(double)5*(low-32)/9,up,(double)5*(up-32)/9);
    return 0;
}
