#include<stdio.h>
#include<string.h>
int main()
{
    int a[105],b[105];
    int c,s,j,i,max=0,min=50000,ck=50000;
    scanf("%d %d",&c,&s);
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
        if(a[i] > max)
        {
            max=a[i];
        }
        if(a[i] < min)
        {
            min=a[i];
        }
    }
    for(i=0;i<s;i++)
    {
        scanf("%d",&b[i]);
        if(b[i] < ck)
        {
            ck=b[i];
        }

    }
    if(max >=ck || 2*min>=ck)
    {
        printf("-1");
    }
    else if(2*min>=max)
         printf("%d",2*min);
    else if(2*min < max)
        printf("%d",max);
    else
        printf("%d",ck-1);

}