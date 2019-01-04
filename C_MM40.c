#include<stdio.h>
int main()
{
int input,i,j,sum=0;
scanf("%d",&input);
for(i=1;i<=input;i++)
sum+=i;
for(j=1;j<=input;j++){
if(j==input)
printf("%d",j);
else
printf("%d + ",j);
}
printf(" = %d\n",sum);
return 0;
}
