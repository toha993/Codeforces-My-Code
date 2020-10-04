#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,max,sum=0;
    int s1[1020],s2[1020],c[1020];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&s1[i],&s2[i]);
    }
        for(i=0;i<a;i++)
        {
            sum=sum+s2[i]-s1[i];
            c[i]=sum;
        }
        max=c[0];
        for(i=1;i<a;i++)
        {
            if(c[i]>max)
            {
                max=c[i];
            }
        }
        printf("%d",max);
}