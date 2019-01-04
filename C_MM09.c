#include<stdio.h>
int main()
{
long int i,a,result=2;
while(scanf("%d",&a)!=EOF){
if(a>=31)
printf("Value of more than 31\n");
else{
for(i=2;i<=a;i++)
result*=2;
printf("%ld\n",result);
result=2;
}
}
return 0;
}
