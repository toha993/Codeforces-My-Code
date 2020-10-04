#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,l;
    pair<long long,long long>p;
    cin >> l >> r;
    cout << "YES" <<endl;
    for(long long i=l;i<r;i=i+2)
        cout << i << " " <<i+1 << endl;
}