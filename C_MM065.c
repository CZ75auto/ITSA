#include<stdio.h>
int main()
{
int money,a1,b1,c1,moneyleft,a,b,c;
int i,j,k;
while(scanf("%d,%d,%d,%d",&money,&a1,&b1,&c1)!=EOF){
        if(a1*15+b1*20+c1*30>money)
        printf("0\n");
else{
moneyleft=money-a1*15-b1*20-c1*30;
a=moneyleft/50;
b=moneyleft%50/5;
c=moneyleft%50%5;
printf("%d,%d,%d\n",c,b,a);
}
}
return 0;

}
