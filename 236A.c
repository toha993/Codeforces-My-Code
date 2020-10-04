#include<stdio.h>
#include<string.h>
int main()
{
    int i,ln,ck=0,j;
    char a[105],b[30]="abcdefghijklmnopqrstuvwxyz";
    scanf("%s",a);
    ln=strlen(a);
    for(i=0;i<ln;i++)
    {
        for(j=0;j<=25;j++)
        {
            if(a[i] == b[j])
            {

                ck++;
                b[j]=0;
            }

        }

    }
    if(ck%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}