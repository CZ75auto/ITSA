#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int input,input_num,count=0;
    int i,j;
    int tmp_num[11];
    while(scanf("%d%d",&input,&input_num)!=EOF)
    {
        for(i=6; i>=0; i--)
        {
            tmp_num[i]=input_num%10;
            input_num=input_num/10;
        }
        for(i=6; i>=0; i--)
        {
            if(tmp_num[i]*10+tmp_num[i+1]==input)
                count++;
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
