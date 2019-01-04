#include<stdio.h>
int main()
{
int a;
while(scanf("%d",&a)!=EOF){
if(a > 100 || a < 0)
printf("error\n");
if(a >= 90 && a <= 100)
printf("A\n");
if(a >= 80 && a <= 89)
printf("B\n");
if(a >= 70 && a <= 79)
printf("C\n");
if(a >= 60 && a <= 69)
printf("D\n");
if(a < 60)
printf("E\n");

}
return 0;
}
