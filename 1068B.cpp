#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,ans=1,cnt=0;
    cin >> a;
    if(a==1)
        ans =1;
    for(int i=2;i<=sqrt(a);i++)
        {
            if(a%i==0)
            {
                cnt=0;
                while(a%i==0)
                {
                    cnt++;
                    a /= i;
                }
                ans *=(cnt+1);
            }
        }
    
    if(a !=1)
        ans *=2;
        
    cout << ans << endl;
        
    
    
    
    
    
    
    
    
    
    
    
}