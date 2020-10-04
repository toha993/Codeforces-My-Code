#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,p,ck=1;
    cin >> n >> p;
    for(int i=0;i<p;i++)
    {
        cin >> a[i];
    }
    sort(a,a+p);
    int ans=1e7,q=n;
    for(int i=0;i<=p-q;i++)
    {
        ans=min(ans,a[n-1]-a[i]);
        n++;
    }
    cout << ans << endl;
}