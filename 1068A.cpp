#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,ck=0;
    cin >> a >> b >> c >> d;
    //cout << c+d << endl;
    if(a>=b && a !=c && c+d<=a )
    {
        long long m=c+d;
        //cout << m << endl;
        long long i=m/b;
        if(m%b==0)
            ck=1;
        //cout << m/b << endl;
        //cout << 28888888888888889*b << endl;
        if(ck==1)
        {
            if(i*b<=a)
            cout << i << endl;
            else
            cout << -1 << endl;
        }
        else if((i+1)*b<=a && ck==0)
            cout << i+1 << endl;
        else
            cout << -1 << endl;
    }
    else
        cout << -1 << endl;
}