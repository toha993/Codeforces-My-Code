#include<bits/stdc++.h> 
using namespace std;
int main()
{
  long long int a,ck=1,cp=1;
  cin >> a;
    for(long long int k=2;k<=sqrt(a);k++)
        {  
          if(a%k==0)
            {
              cp=0;
              cout << ck+(a-k)/2 << endl;
              break;
            }
        }  
    if(cp==1)
      cout << ck << endl;














}