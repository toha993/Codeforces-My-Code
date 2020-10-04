#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ck=0;
    string s;
   string a[1005];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s[0]=='O' && s[1] == 'O' && ck==0)
        {
            s[0]= '+';
            s[1]= '+';
            ck = 1;
        }
        else if(s[3]=='O' && s[4] == 'O' && ck==0)
        {

            s[3]= '+';
            s[4]= '+';
            ck = 1;
        }
        a[i]=s;

    }
    if(ck)
    {
        cout << "YES" << endl;
        for(i=0;i<n;i++)
        {
            cout << a[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}