#include<bits/stdc++.h>
using namespace std;
///2 5 8
int main()
{
    double p,q,lal,sobuj,nil;
    cin >> p >> q;
    lal=ceil((p*2)/q);
    sobuj=ceil((p*5)/q);
    nil=ceil((p*8)/q);
    int mot=lal+sobuj+nil;
    cout << mot << endl;
}