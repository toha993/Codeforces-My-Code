#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<4;i++) {
        cin >> a[i];
    }
    sort(a,a+4);
    for(int i=0;i<=1;i++)
    {
        for(int j=i+1;j<=2;j++)
        {
            for(int k=j+1;k<=3;k++)
            {
                if(a[i]+a[j]>a[k])
                {
                    cout << "TRIANGLE" << endl;
                    exit(0);
                }
                
            }
        }
    }
    for(int i=0;i<=1;i++)
    {
        for(int j=i+1;j<=2;j++)
        {
            for(int k=j+1;k<=3;k++)
            {
               if(a[i]+a[j]==a[k])
               {
                   cout << "SEGMENT" << endl;
                   exit(0);
               }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}