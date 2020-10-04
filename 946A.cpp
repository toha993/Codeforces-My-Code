#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,m=0;
    cin >> n;
    int p[1000];
    for(int i=0;i<n;i++)
        cin >> p[i];
    for(int i=0;i<n;i++)
        {
            if(p[i]<0)
                ans=ans-p[i];
            else
            {
                m=m+p[i];
            }
            



        }
    cout << m-(-ans) << endl;
    
}