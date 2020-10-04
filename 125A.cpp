#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p,l;
    if(n%3==1)
        l=n/3;
    else
        l=ceil(n/3.0);
    p=l/12;
    l -=p*12;
    cout << p << " " << l << endl;
}