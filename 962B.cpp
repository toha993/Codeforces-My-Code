#include<bits/stdc++.h>
using namespace std;
char line[200005];
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int mx,mn,mot;
    mot=a+b;
    //mx=max(a,b);
    //min=min(a,b);
    for(int i=0;i<n;i++)
    {
        cin >> line[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(line[i]=='*')
        {
            int x=(cnt+1)/2;
            int y=cnt-x;
            //cout << x << " " << y << endl;
            mx=max(max(a,b)-x,0);
            mn=max(min(a,b)-y,0);
            a=mx;
            b=mn;
            cnt=0;
        }
        else
        {
            cnt++;
        }
        //cout << cnt << endl;
    
    }
    if(cnt>0)
    {
         int x=(cnt+1)/2;
            int y=cnt-x;
            mx=max(max(a,b)-x,0);
            mn=max(min(a,b)-y,0);
            a=mx;
            b=mn;
    }
    cout << mot-a-b << endl;












}