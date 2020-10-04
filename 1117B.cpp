#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
    long long ttl=0,n,k,m;
    cin >> n >> k >> m;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    long long p= k/(m+1);
    //cout << p << endl;
    ttl = p*a[n-2];
    //cout << ttl << endl;
    ttl+=(k-p)*a[n-1];
    cout << ttl << endl;
    
    //cout << ttl << endl;
}