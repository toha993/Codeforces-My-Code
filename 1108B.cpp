#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long a[200];
map<ll,ll>m;
map<ll,ll>::iterator mp;
int main()
{
   ll n,mx,p,ck=0;
   cin >> n;
   for(int i=0;i<n;i++)
   {
       cin >> a[i];
   }
   sort(a,a+n);
   cout << a[n-1] << " ";
   for(int i=n-2;i>=0;i--)
   {
       //cout << a[i] << " " <<a[i+1] <<  endl;;
       if(a[n-1]%a[i]!=0 || a[i]==a[i+1])
       {
           p=a[i];
           ck++;
           break;
       }
   }
   cout << p << endl;

}