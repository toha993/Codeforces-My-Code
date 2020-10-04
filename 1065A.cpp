#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        long long m=a/d;
        long long p=m/b;
        long long l=p*c;
        cout << m+l << endl;
    }
}