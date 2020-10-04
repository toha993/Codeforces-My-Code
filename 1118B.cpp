#include<bits/stdc++.h>
using namespace std;
int a[200005],bijor[200005],jor[200005];
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >>a[i];
        if(i%2) bijor[i] += a[i];
        else    jor[i] +=a[i];
        bijor[i] +=bijor[i-1];
        jor[i] +=jor[i-1];

    }
    int ans=0;
    //cout << bijor[t] << " " << jor[t] << endl;
    for(int i=1;i<=t;i++)
    {
        int p=bijor[i];
        int q=jor[i];
        p +=jor[t]-jor[i];
        q +=bijor[t]-bijor[i];
        if(i%2) p -=a[i];
        else  q -=a[i];
        //cout << p << " "  << q << endl;
        if(p==q)
            ans++;
    }
    cout << ans << endl;
    
    
}