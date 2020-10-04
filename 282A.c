#include<stdio.h>
#include<string.h>
int main()
{
    char s[5];
    int a,i,ck=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",s);
        if(s[0] == '+' || s[2]== '+' )
            ck++;
        else if(s[0] == '-' || s[2]== '-' )
            ck--;
    }

    printf("%d",ck);
}