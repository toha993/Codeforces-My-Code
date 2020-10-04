#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
   int n,ck=0;
   cin >> n;
   if(n>=100)
        {
            ck+= (n/100);
            n=n%100;
        }
    if(n>=20)
        {
            ck+= (n/20);
            n=n%20;
        }
     if(n>=10)
        {
            ck+= (n/10);
            n=n%10;
        }
     if(n>=5)
        {
            ck+= (n/5);
            n=n%5;
        }
     if(n>=1)
        {
            ck+= (n/1);
            n=n%1;
        }
        
    cout << ck << endl;
}