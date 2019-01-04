#include<stdio.h>
int main()
{
int tp,i,j;
int list[6][6];
int num,t;
freopen("input.txt","r",stdin);
scanf("%d",&num);
t=num;
for(i=1;i<=num;i++)
{
  list[i][0]=i;
  for(j=1;j<=4;j++){
  scanf("%d",&list[i][j]);
}
}
for(i=0;i<=num;i++)
{
list[i][5]=list[i][1]+list[i][2]*2+list[i][3]+list[i][4];
}
for(i=1;i<=num;i++){
for(j=num;j>i;j--){
if(list[j-1][5]<list[j][5])
{
tp=list[j][5];
list[j][5]=list[j-1][5];
list[j-1][5]=tp;
tp=list[j][0];
list[j][0]=list[j-1][0];
list[j-1][0]=tp;
}
}
}
for(i=1;i<=num;i++)
    if(i==num)
    printf("%d",list[i][0]);
else
printf("%d ",list[i][0]);
return 0;
}



