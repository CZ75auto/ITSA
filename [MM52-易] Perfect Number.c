#include<stdio.h>
int main ()
{
    long long int input;
    scanf("%lld",&input);
    //printf("%lld",input);
    if(input>=33550336)
        printf("6\n28\n496\n8128\n33550336");
    else if (input>=8128&&input<33550336)
        printf("6\n28\n496\n8128\n");
    else if(496<=input&&input<=8128)
        printf("6\n28\n496\n");
    else if(28<=input&&input<496)
        printf("6\n28\n");
    else if(10<=input&&input<28)
        printf("6\n");
    else
        printf("6\n");
    return 0;
}
