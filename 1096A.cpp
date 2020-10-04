#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p,q;
        cin >> p >> q;
        for(int i=2;i*p<=q;p++)
        {
            cout << p << " " <<  p*i << endl;
            break;

        }
    }
    
}