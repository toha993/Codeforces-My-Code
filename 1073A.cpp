#include<bits/stdc++.h>
using namespace std;
int main()
{
    //map<char,int>m;
    int t,cp=1,ck=0;
    cin >> t;
    string s;
    cin>>s;
    if(t==1)
        cp=0;
    //sort(p.begin(),p.end());
    for(int i=0;i<t-1;i++)
    {
        if(s[i]!=s[i+1])
           {
               ck=1;
                cout << "YES" << endl;
                cout << s[i] << s[i+1] << endl;
                break;
            }
        else
            cp=0;
    }
    if(cp==0 && ck==0)
        cout << "NO" << endl;

















}