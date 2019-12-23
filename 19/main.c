#include <stdio.h>

int main()
{
    int i,a,c,b[3],t1,t2;
    scanf("%d",&a);
    for(i=0;i<4;i++)
    {
        c=a%10;
        b[i]=(c+9)%10;
        a/=10;
    }
    t1=b[1];
    b[1]=b[3];
    b[3]=t1;
    t2=b[0];
    b[0]=b[2];
    b[2]=t2;
    printf("%d",b[0]+10*b[1]+100*b[2]+1000*b[3]);
    return 0;
}
