#include<bits/stdc++.h>
using namespace std;
///3
///aaa
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    for(int i=0;i<t;i++)
    {
       if(s[i]>s[i+1])
       {
           s[i]=1;
           break;
       }
    }
    for(int i=0;i<t;i++)
    {
       if(s[i]>='a' && s[i] <='z')
            cout << s[i];
    }
    cout << endl;
}