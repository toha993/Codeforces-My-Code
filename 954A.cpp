#include<bits/stdc++.h>
using namespace std;
char line[200005];
int main()
{
    int a,cnt=0;
     cin >> a;
    for(int i=0;i<a;i++)
        cin >> line[i];
    for(int i=0;i<a;)
        {
            if(line[i]=='U' && line[i+1]=='R' || line[i]=='R' && line[i+1]=='U')
                {
                    cnt++;
                    i=i+2;
                }
            else
            {
                i++;
                cnt++;
            }
        }
        cout << cnt << endl;










}