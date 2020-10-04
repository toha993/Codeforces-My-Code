#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,sz;
    cin >>a;
    string s;
    string s1;
    cin >> s;
    for(int i=0;i<a;)
    {
        sz=s1.length();
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
         {
                 if(s1[sz-1]=='a'|| s1[sz-1]=='e' || s1[sz-1]=='i' || s1[sz-1]=='o' || s1[sz-1]=='u' || s1[sz-1]=='y')
                    i++;
                else
                {
                    s1 +=s[i];
                     i++;
                }
         }
         else
            {
                s1+=s[i];
                i++;
            }
            
    }
    cout << s1 << endl;
}