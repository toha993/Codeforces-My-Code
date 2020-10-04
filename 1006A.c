#include<stdio.h>
int main()
{
    int i,j,n;
    unsigned long long a[1005];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2 != 0)
        {
            a[i]=a[i]+1;
        }

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            a[i]=a[i]-1;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%I64d ",a[i]);
    }

}