#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int a[n];
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum +=a[i];
		}
		if(sum%m)
		{
			cout << n << endl;
		}
		else
		{
			int mx=-1,mn=-1,dx=-1,ck=0;
			for (int i = 0; i < n; ++i)
			{
				ck++;
				if((sum-a[i])%m)
				{
					mx=n-ck;
					break;
				}
			}
			ck=0;
			for (int i = n-1; i >=0;i--)
			{
				ck++;
				if((sum-a[i])%m)
				{
					mn=n-ck;
					break;
				}
			}
			for(int i=0;i<n/2;i++)
			{
				if((sum-a[i]-a[n-1-i])%m)
				{
					dx=n-(2*(i+1));
				}
			}
			//cout << mx << " " << mn << " " << dx << endl;
			cout << max(mx,max(mn,dx)) << endl;
		}
	}
}