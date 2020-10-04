#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cp=0,ck=0,cn=0;
   string s;
   cin >> s;
   if(s.length()>4)
   for(int i=1;i<s.length()-2;i=i+2)
   {
       if(s[i-1]== 'A' && s[i]=='B' && s[i+1] == 'A')
            {
                cn=1;
                break;
            }
        if(s[i-1]== 'B' && s[i]=='A' && s[i+1] == 'B')
            {
                cn=1;
                break;
            }
   }
    for(int i=0;i<s.length();i++)        
       {
           //cout << s[i] << " " << s[i+1] << endl;
             //cout << i<<endl;
             if(s[i]=='B' && s[i+1] == 'A' && s[i-1] !='1')
             {
                 s[i+1]= '1';
                if(cp==0)
                    i++;
                
                cp++;
            }
           else if(s[i]=='A' && s[i+1] == 'B' && s[i-1] !='0')
            {
                s[i+1]= '0';
                if(ck==0)
                    i++;
                 ck++;
            }
        //cout << i << endl;
       }
   //cout << cn << " " << cp << " " << ck << endl;
    if((cp&&ck) || (cn && cp>=2) || (cn && ck>=2))
        cout << "YES" << endl;
    else
     cout << "NO" << endl;
    
    
    
    
    
    
    
    
    
}