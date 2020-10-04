#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int n,t;
    cin >> n >> t;
    while(t--)
    {
        unsigned long long int u,v;
        cin >> u >> v;
        if(n%2==0)
        {
            if((u+v)%2==0)
                {
                    cout << (u-1)*(n/2)+ ( (v + 1) / 2 )<< endl;
                }
            else
                {
                    cout << ((n*n)/2)+(u-1)*(n/2)+( (v + 1) / 2 )<< endl;
                }
        }
        else
        {
            if(u%2==0)
            {
                if((u+v)%2==0)
                    cout << ((u/2)*n)-(n/2)+(v/2) << endl;
                else
                   cout << ((n * n + 1) / 2)+(u/2)*(n)+(v/2)-(n/2)  << endl;
            }
            else
            {
                if((u+v)%2==0)
                    cout << (u/2)*(n)+ (v + 1) / 2 << endl;
                else
                    cout << ((n * n + 1) / 2)+(u/2)*(n)+ (v + 1)/2 << endl;
            }
        }

    }
}