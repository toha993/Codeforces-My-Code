#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,ans=0;
    cin >> a >> b;
    if(a>=b)
    {
    	ans =a;
    	while(a>=b)
    	{
    		ans +=(a/b);
    		a=(a/b)+a%b;
    		//cout << a << endl;
    	}
    	cout << ans << endl;

    }
    else
    {
    	cout << a << endl;
    }
}