#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,p=0;
    cin >> a;
    p=a;
    string s;
    cin >> s;
    for(int i=1;i<=a/2;i++)
    {
        if(s.substr(0,i)==s.substr(i,i))
        {
             p=a-i+1;
        }
    }
    cout << p << endl;
}