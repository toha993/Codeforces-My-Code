#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,p;
   cin >> s;
   int cp=1;
   for(int i=0;i<s.length();i++)
   {
      if(s[i]=='0' && cp==1)
     {
        cp=0;
        continue;
     }
     else
     p +=s[i];
     
   }
   if(cp==0)
        cout << p << endl;
   else{
      for(int i=1;i<p.length();i++)
      {
      cout << p[i];
      }
  cout << endl;
   }
}