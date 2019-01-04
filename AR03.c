#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[6]={0};
    int i = 0;
    int sum = 0;

    for(i = 0; i < 6; i++)
        scanf("%d",&input[i]);

    for(i = 5; i >= 0; i--)
    {
    	sum += input[i]*input[i]*input[i];
    }
    printf("%d\n", sum);
    return 0;
}