#include<stdio.h>
int main()
{
int a;
double result;
while(scanf("%d",&a)!=EOF){
result=a*1.6;
printf("%.1lf\n",result);
}
return 0;
}
