#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ttl,n,t;
    cin >> t;
    while(t--)
    {
        cin>> n;
        ttl=(n*(n+1))/2;
        long long i=1;
        while(i<=n)
        {
            ttl -= (2*i);
            i=i*2;
        }
        cout << ttl << endl;
    }
}