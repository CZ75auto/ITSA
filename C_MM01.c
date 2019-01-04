#include<stdio.h>
int main()
{
int up,down,high;
double result;
while(scanf("%d%d%d",&up,&down,&high)!=EOF){
result=(up+down)*high;
result/=2;
printf("Trapezoid area:%.1lf\n",result);
}
}
