#include <stdio.h>

int main()
{
    int i=4,j;
    while(i>0)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        i--;
    }
    return 0;
}
