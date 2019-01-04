#include<stdio.h>
#include<string.h>
int main ()
{
    char input[100];
    int i;
    gets(input);
        for(i=0; i<strlen(input); i++)
        {
            if(input[i]=='a'||input[i]=='b'||input[i]=='c'||input[i]=='A'||input[i]=='B'||input[i]=='C')
            {
                input[i]=input[i]-3;
            input[i]=input[i]+26;
            }
            else
                input[i]=input[i]-3;
            printf("%c",input[i]);
        }
        printf("\n");
        return 0;
}
