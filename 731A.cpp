#include<bits/stdc++.h>
using namespace std;
int ara[10005];
int main()
{
    string p= " abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;
    int ck=0,temp=1,ans=0;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        for(int j=1;j<27;j++)
        {
            if(p[j]==s[i])
                {
                    ck=j;
                    break;
                }
        }
       // cout << ck << " " << abs(temp-ck) << " " << abs(ck)
        ans += min(abs(temp-ck),26-(abs(ck-temp)));
        temp=ck;
       // cout << ans << endl;
    }
   cout << ans << endl;












}