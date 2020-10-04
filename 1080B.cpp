#include<bits/stdc++.h>
using namespace std;
long long bal(long long x)
{
  if(x%2==0)
    return x/2;
  return (x-1)/2-x;


}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        long long int l,r,total=0,tot=0;
        scanf("%lld%lld",&l,&r);
        l--;
       cout <<bal(r)-bal(l) << endl;    
        
    }
    
}