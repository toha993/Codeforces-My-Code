#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s,t;
   cin >> s >> t;
   if(s.length()!=t.length())
   {
       cout << "No" << endl;
   }
   else
   {
       int cp=1;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]=='u')
           {
              if(t[i]== 'a' || t[i]== 'e' || t[i]== 'i' || t[i]== 'o' || t[i]=='u')
              {
                  continue;
              }
              else
                {
                    cp=0;
                    break;
                }
           }
          if(t[i]== 'a' || t[i]== 'e' || t[i]== 'i' || t[i]== 'o' || t[i]=='u')
           {
              if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]=='u')
              {
                  continue;
              }
              else
                {
                    cp=0;
                    break;
                }
           }
         
       }
       if(cp)
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
   }
    
}