#include<stdio.h>
int main()
{
   int time,a=0,temp,i,j,flag=0,total=1,k=0;
   freopen("input.txt","r",stdin);
   scanf("%d",&time);
   while(time--){
        int output[100][2]={0},array[100]={0};
   while(1){
   scanf("%d",&array[a]);
   if(array[a]==-999)
   break;
   a++;
   }
   for(i=a-2;i>=0;i--){
   for(j=0;j<=i;j++){
   if(array[j]<array[j+1]){
   temp=array[j];
   array[j]=array[j+1];
   array[j+1]=temp;
   }
   }
   }
   //for(i=0;i<a;i++){
   //printf("%d ",array[i]);
   //}
   //printf("%d%d",flag,a);
   k=0;
    for(i=0,j=0;i<=a;i++){
           output[k][0]=array[j];
           j++;
           if(output[k][0]!=array[j])
           {
               output[k][1]=total;
               k++;
               total=1;
           }
           else{
            total++;
           }
           }
           for(i=0;i<k-1;i++){
           for(j=0;j<2;j++)
               if(output[i][0]!=0){
             printf("%d ",output[i][j]);
           }if(output[i][0]!=0)
           printf("\n");
           }
           flag++;
           if(time==1)
           printf("\n");
    }
}











