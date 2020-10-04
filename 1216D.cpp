#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll>v,xd;
    int mx=0;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        v.push_back(x);
        mx=max(mx,x);
    }
    ll ans=0;
    for(auto i : v)
    {
        if(i != mx)
        {
            xd.push_back(mx-i);
            ans +=(mx-i);
        }
    }
    ll g=0;
    g=__gcd(g,xd[0]);
    for (auto i : xd) {
        g=__gcd(g,i);
    }
    cout << ans/g << " " << g << endl;
}