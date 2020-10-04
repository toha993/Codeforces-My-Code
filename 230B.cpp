#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005],hoise[200005];
bool prime[1000005]; 
void pprime(long long n) 
{ 
    memset(prime, true, sizeof(prime)); 
    prime[1]=false;
    for (long long p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (long long i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }
}
int main()
{
    long long n;
    pprime(1000000);
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        long long s=sqrt(a[i]);
        if( s*s != a[i] || a[i]==1)
            cout << "NO" << endl; 
        else
        {
            if(prime[s]==true)
               cout << "YES" << endl;
             else
                cout << "NO" << endl;
        }
    }
    
}