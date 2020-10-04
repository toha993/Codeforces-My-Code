#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int cp=0,ck=0,cn=0,a=-1,b=-1,c=-1;
        cin >> s;
        int sz=s.length();
        for(int i=0;i<sz;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                a=i;
                //cp++;
            }
            if(s[i]>='A' && s[i]<='Z')
            {
                b=i;
                //ck++;
            }
            if(s[i]>='0' && s[i]<='9')
            {
                c=i;
                //ck++;
            }
        }
        if(a>=0&&b>=0&&c>=0)
            cout << s << endl;
        else
        {
            for(int i=0;i<sz;i++)
            {
                if( a==-1  && b !=i && c !=i)
                {
                    s[i]='a';
                    a=i;
                }
                 if( a!=i  && b ==-1 && c !=i)
                {
                    s[i]='A';
                    b=i;
                }
                 if( a!=i  && b !=i && c ==-1)
                {
                    s[i]='0';
                    c=i;
                }
            }
            cout << s << endl;
        }

    }
}