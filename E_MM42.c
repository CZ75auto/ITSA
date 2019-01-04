#include<stdio.h>
int main ()
{
    long long int input;
    scanf("%lld",&input);
    //printf("%lld",input);
    if(input>=33550336)
        printf("6 28 496 8128 33550336 is perfect number");
    else if (input>=8128&&input<33550336)
        printf("6 28 496 8128 is perfect number\n");
    else if(496<=input&&input<=8128)
        printf("6 28 496 is perfect number\n");
    else if(28<=input&&input<496)
        printf("6 28 is perfect number\n");
    else if(10<=input&&input<28)
        printf("6 is perfect number\n");
    else
        printf("6\n");
    return 0;
}
