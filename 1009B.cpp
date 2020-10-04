#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1,s2,s;
   int j;
   cin >> s;
   int sz=s.length();
   for(j=0;j<sz;j++)
   {
       if(s[j]=='2')
        break;
   }
   for(int i=0;i<j;i++)
   {
        if(s[i]== '0')
            cout << s[i];
   }
      for(int i=0;i<sz;i++)
   {
        if(s[i]== '1')
            cout << s[i];
   }
      for(int i=j;i<sz;i++)
   {
        if(s[i]== '2'|| s[i]== '0')
            cout << s[i];
   }
   cout << endl;
}