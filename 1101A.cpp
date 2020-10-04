#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int u,v,w,p;
        cin >> u >> v >> w;
        if(w<u || w > v)
           {
               cout << w;
           }
        else
        {
            if( w > u || w <= v)
            {
                p=v/w;
                w=(p+1)*w;
                cout << w;
            }
            //cout << w ;
        }

        cout << endl;











    }














}