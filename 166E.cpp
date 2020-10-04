#include<bits/stdc++.h>
using namespace std;
long long f;
long long M=1000000007;
int main()
{
    long long a,b,e=1;
    cin >> a;
    f=1;
    for(long long i=1;i<=a;i++)
    {
        f=(e%M-f%M+M)%M;
        e=(3*e)%M;
    }
    //b=paisi(a-1);
    cout << f << endl;

}
//f+=m;