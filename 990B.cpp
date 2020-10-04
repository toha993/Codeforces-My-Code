#include<bits/stdc++.h>
int m[200005],s[2000005];
using namespace std;
int main()
{
   int a,k;
   cin >> a >> k;
   //p=a;
   for(int i=0;i<a;i++)
   {
       cin >> m[i];
   }
   sort(m,m+a);
    int p=0;
    for(int i=0;i<a-1;i++)
   {
       //cout << p << endl;
       s[m[i]]++;
       if(m[i]==m[i+1])
            continue;
       if(m[i]+k>=m[i+1])
       {
            p +=s[m[i]];
       }
   }
    cout << a-p << endl;
}