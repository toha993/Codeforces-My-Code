#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,ck=0;
    cin >> a;
    for(int i=1;i<=(a/2);i++)
    {
        if(a%i==0)
            ck++;
    }
    cout << ck << endl;
    
    
    
    
    
}