#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[6]={0};
    int i = 0;

    for(i = 0; i < 6; i++)
        scanf("%d",&input[i]);

    for(i = 5; i >= 0; i--)
    {
        if(i == 0)
            printf("%d\n",input[i]);
        else
            printf("%d ",input[i]);
    }

    return 0;
}
