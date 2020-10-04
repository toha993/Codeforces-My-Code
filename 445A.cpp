#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j;
    char s[105][105];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(s[i][j]== '.')
            {if((i+j)%2==0)
            {
                s[i][j]= 'B';
            }
            else
                s[i][j]= 'W';
           }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%c",s[i][j]);
            if(j==b-1)
                printf("\n");


        }
    }
}