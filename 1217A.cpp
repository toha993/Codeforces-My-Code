#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       int x,y,z;
       cin >> x >> y >> z;
       if(x+z<=y)
       {
           cout << 0 << endl;
           continue;
       }
       if(z==0)
       {
           if(x>y)
             cout << 1 << endl;
           else
             cout << 0 << endl;

            continue;
       }
       if(y+z<x)
       {
           cout << z+1 << endl;
           continue;
       }
       else if(y+z==x)
       {
           cout << z << endl;
           continue;
       }
       int p=((y+z-x)/2);
       cout << z-p << endl;
    }
}