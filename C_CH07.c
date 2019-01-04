#include<stdio.h>
int main()
{
int sex,height;
double a;
while(scanf("%d%d",&height,&sex)!=EOF){
if(sex==1)
a=(height-80)*0.7;
if(sex==2)
a=(height-70)*0.6;
printf("%.1lf\n",a);
}
return 0;


}
