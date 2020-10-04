#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,m,k,row,baki;
   cin >>  n >> m >> k;
   if(k <=n-1)
    cout << k+1 << " " << 1 << endl;
    else
    {
        k=k-n+1;
        row=k/(m-1);
        baki=k%(m-1);
        if(baki==0)
        {
            if(row%2==0)
            {
                cout << n-row+1    << " " << 2 << endl;
            }
            else
                cout << n-row+1 << " " << m << endl;
        }
        else
        {
             if(row%2==0)
            {
                cout << n-row << " " << 2+baki-1 << endl;
            }
            else
                cout << n-row << " " << m-baki+1 << endl;
            
            
            
            
            
        }
        
        
        
        
        
        
        
    }

}