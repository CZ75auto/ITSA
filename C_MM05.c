#include<stdio.h>
int main()
{
double s,result;
while(scanf("%lf",&s)!=EOF)
{
result=(((s*s)*100 + 0.5)/(100.0));
printf("%.1lf\n",result);
}
return 0;
}
