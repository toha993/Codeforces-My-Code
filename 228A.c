#include<stdio.h>
#include<string.h>
int main()
{
    int i,ck,j;
    int a[20];
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    ck=0;
    for(i=0;i<3;)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j])
                ck++;
        }
        if(a[i]==a[i+1])
            i=i+2;
        else
            i++;
        if(ck==3)
            break;
    }

    printf("%d",ck);
}