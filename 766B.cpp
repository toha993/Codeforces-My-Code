#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ck=0;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+t);
    for(int i=2;i<t;i++)
    {
        if(a[i-2]+a[i-1] > a[i] && a[i]+a[i-1] > a[i-2] && a[i-2]+a[i] > a[i-1])
            {
                ck=1;
                break;
            }

    }
    if(ck)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;




















}