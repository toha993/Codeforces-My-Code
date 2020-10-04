#include <bits/stdc++.h>

using namespace std;
int form[100005];
int main() {
    int a,ck=0;
    cin >> a;
    for(int i=0;i<2*a;i++)
    {
        cin >> form[i];
    }
    for(int i=1;i<2*a;i=i+2)
    {
        for (int j=0;j<2*a;j=j+2)
        {
            if(form[i]==form[j])
                ck++;
        }
    }
    cout << ck << endl; 
}