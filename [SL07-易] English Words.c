#include<stdio.h>
#include<string.h>
int main ()
{
    char input[90];
    int i;
    int score=0;
    memset(input,0,90);
    while(gets(input)!=EOF)
    {

        for(i=0; i<strlen(input);i++)
        {
           // printf("%d\n",input[i]);
            if(input[i]=='e'&&input[i+1]=='n'&&input[i+2]=='d')
                return 0;
            else if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u')
            {
                score=score+5;
                //printf("%d\n",score);
            }

            else if(input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U')
            {
                score=score+6;
               // printf("%d\n",score);
            }
            else if(65<=input[i]&&input[i]<=90)
            {
                score=score+3;
                //printf("%d\n",score);
            }

            else if(97<=input[i]&&input[i]<=122)
            {
                score=score+2;
                //printf("%d\n",score);
            }


        }
        printf("%d\n",score);
        score=0;
    }
    return 0;

}
