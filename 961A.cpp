#include <bits/stdc++.h>
int a[1050],cnt[1050];
using namespace std;
int main() {
    int n,m,cp=1;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
        cnt[a[i]]++;

    }
    int min=2e5;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]==0)
            {
                cp=0;
                break;
            }
        else
        {
            if(cnt[i]<min)
                {
                    min=cnt[i];

                }
        }
        
    }
    if(cp)
        cout << min << endl;
    else
        cout << 0 << endl;
    















}