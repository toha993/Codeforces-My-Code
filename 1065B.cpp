#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin >> a >> b;
    if(b*2>=a)
        cout << 0 << " ";
    else
        cout << a-2*b << " " ;
    double p=ceil(sqrt(2*b+1));
    if((p*(p-1)/2)<b)
        p++;
    //cout << p << endl;
    if(p>1)
       cout << a-(int)p << endl;
    else
        cout << a << endl;

}