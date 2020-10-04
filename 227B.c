#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,n,m,x,p,cn=0,ck=0,a[100005]={0};
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&x);
        a[x]=i;
    }
    scanf("%I64d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%I64d",&x);
        ck=ck+a[x];
        cn=cn+(n+1-a[x]);
    }


    printf("%I64d %I64d",ck,cn);
}