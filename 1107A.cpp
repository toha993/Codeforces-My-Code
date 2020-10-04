#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int a=0;a<t;a++)
    {
        int sz;
        string s;
        cin >> sz >> s;
        //cout << sz << " " << s ;
        //cout << s[0] << " " << s[1] << endl;
        if(sz==2 &&  s[0]>=s[1])
        {
            //cout  << " bal";
          //if(s[0]>=s[1])
                cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << s[0] << " ";
            for(int i=1;i<sz;i++)
                cout << s[i];
        }
        cout << endl;










    }


















}