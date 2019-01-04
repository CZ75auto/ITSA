#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
while(scanf("%d%d\n%d%d",&a,&b,&c,&d)!=EOF){
int money=0;
e=(c-a)*60+(d-b);
//printf("%d",e);
if(e<=120)
money=e/30*30;
if(e>=120&&e<=240)
money=(e/30-4)*40+120;
if(e>=240)
money=(e/30-8)*60+280;
printf("%d\n",money);
}
return 0;
}
