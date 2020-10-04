#include<bits/stdc++.h>
using namespace std;
//editorial
int a[300005];
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int mn=1000000005;
    int k;
    for(int i=1;i<=n;i++)
    {
        k=a[i]/max(i-1,n-i);
        mn=min(mn,k);
    }
    cout << mn << endl;
}