#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        printf("%d+%d=%d\n",x,y,x+y);
        printf("%d*%d=%d\n",x,y,x*y);
        printf("%d-%d=%d\n",x,y,x-y);
        if(x % y >= 0)
            printf("%d/%d=%d...%d\n",x,y,x/y,x%y);
        else
        {
            int q = x/y;
            if(q < 0)
                q -= 1;
            else
                q += 1;
            printf("%d/%d=%d...%d\n",x,y,q,x - y*q);
        }
    }
    return 0;
}
