#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,s1,s2;
        cin >> s;
        int sz,l=0,ck=0;
        sz=s.length();
        for(int i=0;i<sz-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                ck=1;
                sort(s.begin(),s.end());
                break;
            }
        }
        if(ck==0)
            cout << -1 << endl;
        else
            cout << s << endl;


    }
}