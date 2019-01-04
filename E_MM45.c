#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int i;
    int side[3];
    int a,b;
        while(scanf(" %d %d %d",&side[0],&side[1],&side[2])!=EOF){
        qsort(side,3,sizeof(side[0]),cmp);
        if( side[0]+side[1] <= side[2] )
        {
            printf("Not Triangle\n");
        }
        a = side[0]*side[0] + side[1]*side[1];
        b = side[2]*side[2];
        if(a > b)
        {
            printf("Acute Triangle\n");
        }
        if(a < b)
        {
            printf("Obtuse Triangle\n");
        }
        if(a == b)
        {
            printf("Right Triangle\n");
        }
        }

    return 0;
}
