#include<bits/stdc++.h>
using namespace std;
int line [300005];
int main()
{
    int a;
    long long p=0,sum=0;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> line[i];
    }
    sort(line,line+a);
    for(int i=0;i<a/2;i++)
    {
        //cout  << line[i] << " " << line[a-i-1] << endl;
        p=(line[i]+line[a-i-1]);
        sum +=(p*p);
    }
    cout << sum << endl;
}