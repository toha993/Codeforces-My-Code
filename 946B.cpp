#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,b,ll=0,mm=0;
    cin >> a >> b;
    while(1)
    {
        if(a>=2*b)
            {
                mm=a/(2*b);
                a=a-(mm*2*b);
                if(a<=0)
                    break;
            }
        if (b>=2*a)
            {
                ll=b/(2*a);
                 b=b-(ll*2*a);
                if(b<=0)
                    break;
            }
        if(a<=0 || b <=0 ||(b < 2*a && a < 2*b) )
            break;
    }
    cout << a << " " << b << endl;
    
}