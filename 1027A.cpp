#include<bits/stdc++.h>
#include<string.h>
/*

55
4
adfa



*/
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long a;
        string s,p,q;
        cin >> a;
        cin >> s;
        //p=s;
        //q=s;
        //sort(p.begin(),p.end());
        for(int i=0;i<a/2;i++)
        {
            if(s[i]+1==s[a-i-1]-1)
            {
               s[i]=s[i]+1;
               s[a-i-1]=s[a-i-1]-1;
            }
            if(s[i]-1==s[a-i-1]+1)
            {
                s[i]=s[i]-1;
               s[a-i-1]=s[a-i-1]+1;
            }
        }
        q=s;
        //cout << q << endl;
        reverse(s.begin(),s.end());
        //cout << s << endl;
        if(s==q)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}