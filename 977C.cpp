#include<bits/stdc++.h>
using namespace std;
int bal[200005];
int main()
{
   int n,k;
   cin >> n >> k;
   for(int i=0;i<n;i++)
    cin >> bal[i];
    sort(bal,bal+n);
    //cout << n << " " << k << endl;
    //cout << bal[k]-1 << endl;
    if(k==0)
        {
            if(bal[k]==1)
                cout << -1 << endl;
            else
                cout << bal[k]-1 << endl;
        }
    else if(bal[k-1]==bal[k])
        cout << -1 << endl;
    else
        cout << bal[k-1] << endl;
    
}