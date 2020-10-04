#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ck=0;
    while(n--)
    {
        char p;
        cin >> p;
        if(p=='-')
        {
            ck=max(ck-1,0);
        }
        else
            ck++;
    }
    cout << ck << endl;
}