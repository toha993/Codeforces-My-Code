#include<bits/stdc++.h>
#define int long long
using namespace std;
 
main()
{
    int n,k,t,x;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        x=n;
        int flag=0;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                //x=x+i;
                flag=i;
                break;
                }
         }
        if(flag==0)
          x =x+x+2*(k-1);
        else
            x=x+flag+2*(k-1);
      //cout << x << endl;
   cout<<x<<endl;
 
    }
 
 
}