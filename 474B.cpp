#include<bits/stdc++.h>
using namespace std;
int a[100005],b;
int main()
{
    int s,p=0,k,ans=0;
    cin >> s;
    for(int i=0;i<s;i++)
    {
        scanf("%d",&k);
        p +=k;
        a[i]=p;
    }
    int g;
    cin >> g;
    for(int q=0;q<g;q++)
    {
        scanf("%d",&b);
        ans=lower_bound(a,a+s,b)-a;
        printf("%d\n",ans+1);
    }
}