#include<bits/stdc++.h>
using namespace std;
int a[200005],bijor[200005],jor[200005];
int main()
{
    int t,ans=50000000,p=0;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a[i];
        p +=a[i]; 
    }
    sort(a,a+t);
    for(int i=0;i<t;i++)
    {
        for(int j=2;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
                ans=min(p-a[i]-a[0]+(a[0]*j)+(a[i]/j),ans);
            //cout << ans << endl;
        }
    }
    cout << min(ans,p) << endl;
    
    
    
    
}