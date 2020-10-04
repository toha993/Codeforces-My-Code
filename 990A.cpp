#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n,m,a,b;
   cin >> n >> m >> a >> b;
   if(n%m==0)
   {
       cout << 0 << endl;
   }
    else
    {
        ll dif=0,xtra=0,lgbe1=0,lgbe2=0;
        dif=n/m;
       // cout << dif << endl;
        xtra=n%m;
        //cout << xtra << endl;
        lgbe1=((dif+1)*m-n)*a;
        //cout << lgbe1 << endl;
        lgbe2=xtra*b;
        //cout << lgbe2 << endl;
        if(lgbe1<lgbe2)
            cout << lgbe1 << endl;
        else
            cout << lgbe2 << endl;




    }
}