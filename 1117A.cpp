#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
    long long ttl=0,n,k=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>k)
            k=a[i];
    }
    int ck=0,mx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
            ck++;
        else
        {
            mx=max(ck,mx);
            ck=0;
        }
    }
    cout << max(ck,mx) << endl;
    
    
    
}