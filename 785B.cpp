#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,p,m;
    cin >> n;
    long int a[n],e[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&e[i],&a[i]);
    }
    for(int i = 1;i < n; ++i)
    {
       if(a[0] > a[i])
           a[0] = a[i];
    }
    long int l=a[0];
    for(int i = 1;i < n; ++i)
    {
       if(e[0] < e[i])
           e[0] = e[i];
    }
    long int ll=e[0];
    //cout << e[0] << endl;
    cin >> s;
    long int b[s],c[s];
    for(int p=0;p<s;p++)
    {
        scanf("%d %d",&b[p],&c[p]);

    }
    for(int i = 1;i <s; ++i)
    {
       if(b[0] < b[i])
           b[0] = b[i];
    }
    long int z=b[0];
    for(int i = 1;i < s; ++i)
    {
       if(c[0] > c[i])
           c[0] = c[i];
    }
    long int zz=c[0];
    //cout << c[0] << endl;
    long int q=z-l;
    //cout << q << endl;
    long int qq=ll-zz;
    //cout << qq << endl;
    if(q>qq)
    {
        if(q<0)
            cout << "0" << endl;
        else
            cout << q << endl;
    }
    else
    {
        if(qq<0)
            cout << "0" << endl;
        else
            cout << qq << endl;
    }





















}