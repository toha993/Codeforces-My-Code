#include<stdio.h>
#include<string.h>
int main()
{
    char s1[105],s2[105],a,b;
    int i,ln;
    scanf("%s %s",s1,s2);
    ln=strlen(s1);
    for(i=0;i<ln;i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] =tolower(s2[i]);

    }
    for(i=0;i<ln;i++)
    {
        a=s1[i];
        b=s2[i];
        if(a==b)
        {
            continue;
        }
        else if( a>b )
        {
            printf("1");
            break;
        }
        else
            {
                printf("-1");
                break;
            }
    }
    if(i==ln)
        printf("0");













}