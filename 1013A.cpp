#include<bits/stdc++.h>
using namespace std;
int a[55];
int b[55];
int main()
{
    int i,sum1=0,sum2=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum1 +=a[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i];
        sum2 +=b[i];
    }
    if(sum2 <= sum1)
        cout << "Yes" <<endl;
    else
        cout << "No" << endl;
}