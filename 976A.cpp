#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ck=0,cn=0;
    char p[1000];
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> p[i];
    for(int i=0;i<n;i++)
        {
            if(p[i]== '0')
                ck++;
            else if(p[i]== '1')
                cn=1;
        }
    if(cn==1)
    {
        cout << 1;
        for(int i=0;i<ck;i++)
                cout << 0;
            cout << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    













}