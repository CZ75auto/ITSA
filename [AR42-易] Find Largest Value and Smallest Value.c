#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input[11];
    int i,max=0,min=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&input[i]);
    }
    for(i=0; i<10; i++)
    {
        if(max<input[i])
            max=input[i];
        if(min>input[i])
            min=input[i];
    }
    printf("Largest number = %d\n",max);
    printf("Smallest number = %d\n",min);
    return 0;
}
