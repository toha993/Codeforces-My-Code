#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,f=1000000,m=1,p[100005];
    cin >>a;
    int line[100005],mine[100005],mm[100005];
    for(int i=0;i<a;i++)
    {
        cin >> line[i];
        mine[i]=line[i];
    }
    for(int i=0;i<a;i++)
    {
       p[i]=line[i]-m;
       mine[i]=f-mine[i];
       //cout << p[i] << " " << mine[i] << endl;
       mm[i]=min(p[i],mine[i]);
       if(mm[i]!=p[i])
            {
                f -=mine[i];
            }
       //cout << p[i] << " " << f  << endl;
          
    }
    sort(mm,mm+a);
    cout << mm[a-1] << endl;
    
    
    
        
}