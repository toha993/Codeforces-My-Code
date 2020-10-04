#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      long long n,a,b;
      cin >> n >> a >> b;
      if(n%2==0)
      {
        if(2*a > b)
            cout << (n/2)*b << endl;
        else
            cout << n*a << endl;
           
      }
    else
      {
          if(2*a > b)
            cout << a+((n-1)/2)*b << endl;
            else
                cout << n*a << endl;
          
          
      }
        
        
        
        
        
        
        
        
        
    }
    
    
}