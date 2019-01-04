#include<stdio.h>
int main()
{
int a,b,result;
while(scanf("%d%d",&a,&b)!=EOF){
result=a+b;
result*=result;
printf("%d\n",result);
}
}
