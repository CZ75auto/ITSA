#include<stdio.h>
int main ()
{
int ad,ch,se;
int ad_m,ch_m,se_m,total;
scanf("%d%d%d%d%d%d",&ad,&ad_m,&ch,&ch_m,&se,&se_m);
total=ad*ad_m+ch*ch_m+se*se_m;
printf("%d\n",total);
return 0;
}
