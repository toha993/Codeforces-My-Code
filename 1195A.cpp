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


int main()
{
	int n,k;
	cin >> n >> k;
	int a[n+1];
	map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int ans=0,ck=0;
	if(n&1)
		n++;
	for(auto i: mp)
	{
		if(n==0)
			break;
		if(i.second%2==0)
		{
			if(n>=(i.second))
				{
					n -=(i.second);
					ans +=(i.second);
				}
			else
			{
				n=0;
				ans +=(n*2);
				break;

			}
		}
		else
		{
			ck++;
			if(n>=(i.second))
				{
					n -=(i.second)-1;
					ans +=(i.second-1);
				}
			else
			{
				n=0;
				ans +=(n*2);
				break;

			}
		}
	}
	//cout << ans << " " << n << endl;
	n /=2;
	if(n!=0)
	{
		if(n>=ck)
			cout << ans+ck << endl;
		else
			cout <<  ans+n << endl;
	}
	else
		cout << ans << endl;
}