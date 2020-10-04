#include <iostream>
using namespace std;
long long a[200005];
int main() {
    long long n,p;
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        cin >> p;
        a[i] =a[i-1]+ p;
        //cout << a[i] << endl;
    }
    long long mx=(a[n-1]+1)/2;
    //cout << mx << endl;
    for(long long i=0;i<n;i++)
    {
        if(a[i]>=mx)
            {
                cout << i+1 << endl;
                break;
            }
        
        
        
    }
}