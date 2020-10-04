#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,k;
        cin >> a >> b >> k;
        //k =k/2;
        if(a==b)
        {
            if(k%2==0)
                cout << 0 << endl;
            else
                cout << a  << endl;
        }
        else
        {
                if(k%2==0)
                   {
                       cout << (k/2)*a-(k/2)*b << endl;

                   }
                else
                    {
                        cout << ((k/2)+1)*a-(k/2)*b << endl;
                    }
        }

    }
}