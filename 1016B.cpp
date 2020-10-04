#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s;
    int s1,s2,q,cnt[100005];
    cin >> s1 >> s2 >> q ;
    cin >> a >> s ;

    for(int i=0;i+s2<=s1;i++)
    {
        if(a.substr(i,s2)==s)
            cnt[i]=1;
        else
            cnt[i]=0;
    }
    while(q--)
    {
        int l,r,ck=0;
        cin >> l >> r;
        for(int i=l-1;i+s2<=r;i++)
        {
           if(cnt[i]==1)
                ck++;
        }
        cout << ck << endl;
    }


}