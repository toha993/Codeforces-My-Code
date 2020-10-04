#include<bits/stdc++.h>
using namespace std;
int b[100005],g[100005];
int main()
{
    int t,ans=0,ck=0,j=-1;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        //int p;
        cin >> b[i];
    }
    sort(b,b+t);
    for(int i=t-1;i>=j && i >=0 ;i--)
    {
       // cout << j << endl;
        if(b[i]==4)
           {
                ck++;
           }
        else if(b[i]<4)
        {
            if(i==j)
                {
                    ck++;
                    break;
                }    
            for(;j<i;)
        {
            if(j==-1)
                    j=0;
             //cout << i << " " << j << endl;
             if(b[i]+b[j]==4)
                   {
                       //cout << b[i]  << " " << b[j] << endl;
                        j++;
                        ck++;
                        break;
                   }
                else if(b[i]+b[j]<4)
                {
                    //cout << b[i]  << " " << b[j] << endl;
                    b[i] +=b[j];
                    j++;
                    if(j>=i)
                        {
                            ck++;
                            break;
                        }
                }
                else if(b[i]+b[j]>4)
                {
                    ck++;
                    break;
                }
            }
        }
        
    }
    cout << ck << endl;
    
}