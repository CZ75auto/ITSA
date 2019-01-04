#include<stdio.h>
int main()
{
int dis,time;
while(scanf("%d",&dis)!=EOF){
time=dis/(1-0.3*2.54);
printf("%d\n",time+1);
}
return 0;

}
