
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,a,ans=0;
   cin >> n >> a;
   int t=n;
   int baki=a;
   if(n-1 <=a)
   		{
   			cout << n-1 << endl;
   			return 0;
   		}
   	else
   	{
   		for(int i=1;i<=t;i++)
   		{
   		   //cout << n-1 << " " << i  << endl;
   		    if(i>1)
   				{
   				    ans += i;
   				    n = n-1;
   				}
   			else
   			    {
   				   ans += a*i;
   				   n= n-a;
   					     
   				}
   			if(n-1==0)
   			    break;
   			//cout << ans  << " " << n << endl;
   		}
   		cout << ans << endl;

   	}



	return 0;
}