#include <iostream>

using namespace std;
long long a[100005];
int main() {
    long long p;
    cin >> p;
    for(int i=0;i<p;i++)
    {
        cin >> a[i];
    }
    long long s=0;
    for(int i=0;i<p;i++)
    {
        if(a[0]!=0)
            {
               // cout << a[0] << s << endl;
                cout << i+1 << endl;
                break;
            }
        else
        {
            if(a[i]>s)
                {
                    cout << i+1 << endl;
                    break;
                }
            else if(a[i]==s)
            {
                s++;
            }
            
        }
    if(i+1==p)
        cout << -1 << endl;
    }
}