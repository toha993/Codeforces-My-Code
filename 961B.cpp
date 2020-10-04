#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+5],t[n+5];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    ll xtra=0;
    for(int i = 1; i <= n; i++)
    {
        cin >> t[i];
        if(t[i]==1)
        {
            xtra +=a[i];
            a[i]=0;
        }
    }
    ll pref[n+5]={0};
    pref[0]=a[0];
    for(int i = 1; i <=n; i++)
    {
        pref[i]=a[i]+pref[i-1];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout << pref[i] << " ";
    // }
   // cout << endl;
    ll mx=0;
    for(int i = n; i>=m; i--)
    {
       // cout << pref[i+m-1]-pref[i] << endl;
        mx=max(pref[i]-pref[i-m] ,mx);
    }
   //cout << mx << endl;
  //  cout << mx << endl;
    cout << xtra+mx << endl;
    
    

    
}