#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],hoise[200005];
int main()
{
    int n,ck=0,cn=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin >> p;
        if(p>0)
            ck++;
        if(p<0)
            cn++;
    }
    int ans=(n+1)/2;
    if(ck>=ans)
        cout << 1 << endl;
    else if(cn>=ans)
        cout << -1 << endl;
    else
        cout << 0 << endl;
    










}