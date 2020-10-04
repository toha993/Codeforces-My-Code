#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int chalu[t];
    for (int i=0;i<t;i++) {
        if(s[i]=='0')
        {
            chalu[i]=0;
        }
        else
            chalu[i]=1;
    }
    int gap[t],strt[t];
    for(int i=0;i<t;i++)
    {
        cin >> gap[i]  >> strt[i];
    }
    int mx=-1,time=0;
    for(int i=0;i<=1000;i++)
    {
        int ck=0;
        for(int j=0;j<t;j++)
        {
           if(i==strt[j])
           {
               if(chalu[j])
               {
                   chalu[j]=0;
                   strt[j] +=gap[j];
               }
               else
               {
                   chalu[j]=1;
                   strt[j] +=gap[j];
                   ck++;
               }
           }
           else
           {
               if(chalu[j])
                ck++;
           }
        }
      // cout << i << " " << ck << endl;
       if(ck>mx)
       {
          
           mx=ck;
           //cout << mx << endl;
       }
    }
    cout << mx << endl;
    
    
}