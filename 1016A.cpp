#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long u,v,a,p=0,q=0,r=0;
    cin >> u >> v;
    while(u--)
    {
        cin >> a;

         p+=a;

         r=p/v;
         r -=q;

         cout << r << endl;
         q +=r;

    }

}