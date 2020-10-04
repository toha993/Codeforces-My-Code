#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],hoise[200005];
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=2*n;i++)
    {
        int p;
        cin >> a[i];
        if(!b[a[i]])
            {
                b[a[i]]=i;
            }
        else if(!hoise[a[i]])
        {
            hoise[a[i]]=i;
        }
        
    }
    long long ans1=0,ans2=0,ttl=b[1]-1+hoise[1]-1;
    for(int i=2;i<=n;i++)
    {
        //cout << i << " " <<  b[i] << " " << hoise[i]  << endl; 
        ans1= abs(b[i]-b[i-1])+abs(hoise[i]-hoise[i-1]);
        ans2= abs(b[i]-hoise[i-1])+abs(hoise[i]-b[i-1]);
        //cout << ans1 << " " << ans2 << endl;
        ttl +=min(ans1,ans2);
    }
    cout << ttl << endl;










}