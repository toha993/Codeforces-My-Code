#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p;
        cin >> p;
        if(p%7==0)
            cout << p/7 << endl;
        else
            cout << (p/7)+1 << endl;
    }
}