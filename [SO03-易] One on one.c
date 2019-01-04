#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
{
    int c = *(int *)a;
    int d = *(int *)b;
    if(c < d)
    {
        return -1;
    }
    else if (c == d)
    {
        return 0;
    }
    else return 1;
}
int main ()
{
    int soldier[10001]={0};
    int enemy[10001]={0};
    int num,i,j;
    int win_count=0;
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
            break;
        for(i=0; i<num; i++)
        {
            scanf("%d",&enemy[i]);
        }
        for(i=0; i<num; i++)
        {
            scanf("%d",&soldier[i]);
        }
        qsort(soldier,num,sizeof(int),cmp);
        qsort(enemy,num,sizeof(int),cmp);
        for(i=0,j=0; j<num,i<num; j++)
        {
            if(soldier[i]>enemy[j])
            {
                win_count++;
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        printf("%d\n",win_count);
        win_count=0;
    }
    return 0;
}
