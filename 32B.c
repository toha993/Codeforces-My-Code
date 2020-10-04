#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i;
    char code[200];
    scanf("%s",code);
    for(i=0;;)
    {
        if(code[i]=='.')
            printf("0");
        else
        {
            if(code[i+1]=='.')
             printf("1");
            else
             printf("2");
             i++;

        }
        i++;
        if(code[i]== '\0')
        break;

    }


}