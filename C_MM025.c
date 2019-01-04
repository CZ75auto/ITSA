#include<stdio.h>
int main()
{
int amount=0,input;
int i,k;
while(scanf("%d",&input)!=EOF){
for(i=1;i<=input;i++){
if(i%3==0)
amount+=i;
}
printf("%d\n",amount);
amount=0;

}
return 0;


}
