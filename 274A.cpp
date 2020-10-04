#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll p[100005];

int main()
{
    ll n,k,ck=0;
    set<ll>st;
    cin >> n >>k;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&p[i]);
    }
    sort(p,p+n);
    for(ll i=0;i<n;i++)
    {
        if(st.count(p[i])==0)
        {
            st.insert(p[i]*k);
            ck++;
        }
    }
    cout << ck << endl;
}