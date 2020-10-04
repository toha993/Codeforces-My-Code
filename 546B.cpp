#include<bits/stdc++.h>
using namespace std;
int a[3005];
int main()
{
    int n,ck=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    sort (a,a+n);
    for(int p=1;p<n;p++)
    {
        if(a[p-1]==a[p])
            {
                a[p]=a[p]+1;
                ck++;
            }
        //cout << a[p-1] << " " << a[p] << endl;
        if(a[p]< a[p-1])
        {
            while(a[p]<=a[p-1])
                {
                    a[p]++;
                    ck++;
            }
        }

    }
    cout << ck << endl;


















}