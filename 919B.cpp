#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    int a=0;
    while(n)
    {
        a +=n%10;
        n /=10;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int p=19;
    for(int i=0;i<n;)
    {
        if(isprime(p)==10) i++;
        p++;
            
    }
    cout << p-1 << endl;
}