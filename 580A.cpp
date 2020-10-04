#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,p,ans=0,ck=1;
    cin >> n;
    cin >> p;
    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
        if(a[i]>=p)
        {
            ck++;
        }
        else
            {
                ans =max(ck,ans);
                ck=1;
            }
        p=a[i];
        
        
    }
    cout << max(ans,ck) << endl;
    
    
    
}