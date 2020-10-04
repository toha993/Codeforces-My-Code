#include <bits/stdc++.h>
int a[100005];
using namespace std;
int main() {
   int t,k;
   cin >> t >> k;
   for(int i=0;i<t;i++)
    {
        cin >> a[i];
    }
    int ck=1,ans=0;
    if(t==1)
    	cout << 1 << endl;
    else
    {
	    for(int i=1;i<t;i++)
	    {
	        if(a[i]==a[i-1])
	            {
	               ans=max(ans,ck);
	               ck=1;
	            }
	        else
	            {
	            	ck++;
	            	//cout << a[i] << " " << ck << endl;
	            }
	    }
	    cout << max(ans,ck) << endl;
    }
}