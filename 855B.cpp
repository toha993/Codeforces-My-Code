#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[100005],dp1[100005],dp2[100005];
main()
{
    int n,p,q,r;
    cin >> n >> p >> q >> r;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];    
    }
    dp[0]=a[0]*p;
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i-1],a[i]*p);
    }
    dp1[0]=dp[0]+a[0]*q;
    for(int i=1;i<n;i++)
    {
        dp1[i]=max(dp1[i-1],dp[i]+a[i]*q);
    }
    dp2[0]=dp1[0]+a[0]*r;
    for(int i=1;i<n;i++)
    {
        dp2[i]=max(dp2[i-1],dp1[i]+a[i]*r);
    }
    cout << dp2[n-1] << endl;
}