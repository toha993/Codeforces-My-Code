#include<bits/stdc++.h>
using namespace std;
int main()
{
   int wallet[1005],bill[1005];
   int b,w,cnt=0,j=0;
   cin >> b >> w;
   for(int i=0;i<b;i++)
   {
       cin >> bill[i];
   }
   for(int i=0;i<w;i++)
   {
       cin >> wallet[i];
   }
   for(int i=0;i<w;i++)
   {
        for(;j<b;j++)
        {
            if(wallet[i]>=bill[j])
            {
                //cout << "bal" << endl;
                cnt++;
                break;
            }

        }
        j=j+1;
        if(j>b)
            break;



   }
   cout << cnt << endl;
}