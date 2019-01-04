#include<stdio.h>
int main()
{
int a,b,c,d,e;
int score;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
score =(a+b*2+c*2+d*2)-(e*2);
if(score>=45)
printf("A\n");
if(score <= 34 && score >= 25)
printf("C\n");
if(score <= 44 && score >= 35)
printf("B\n");
if(score < 25)
printf("D\n");
return 0;
}

