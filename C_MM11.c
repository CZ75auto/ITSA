#include<stdio.h>
int main()
{
int a,b,c,d;
while(scanf("%d",&a)!=EOF){
b=a/10;
printf("NT10=%d\n",b);
c=(a-10*b)/5;
printf("NT5=%d\n",c);
d=(a-10*b-5*c);
printf("NT1=%d\n",d);
}
return 0;

}
