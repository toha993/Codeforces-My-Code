#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,t,ck=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c >= 2 )
            ck++;
    }
    printf("%d",ck);
















}