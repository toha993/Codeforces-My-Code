#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n,ck=0,m=0;
    n=s.length();
    int p=n-1;
    int l=0;
    while(l<n-1 && s[l] != '[' )
        l++;
    while(l<n-1 && s[l] != ':' )
        l++;
     while(p>l && s[p] != ']' )
        p--;
     while(p>l && s[p] != ':' )
        p--;
    //cout << l << " " << p << endl;
    for(int i=l;i<p;i++)
    {
         m=1;
        if(s[i]=='|')
            ck++;
    }

    if(m==1)cout << ck+4 << endl;
    else
        cout << -1 << endl;
}