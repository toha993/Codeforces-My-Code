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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		map<int,int>mp;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			mp[x]++;
		}
		int xd=mp.size();
		int ans=0;
		for(auto i : mp)
		{
			if(i.second>ans)
			{
				//cout << i.first << " " << i.second <<  " " << xd << endl;
				if (i.second==xd-1)
				{
					ans=i.second;
				}
				else if(i.second-1==xd)
				{
					ans=i.second-1;
				}
				else if(i.second>xd)
				{
					ans=xd;
				}
				else if(i.second<xd)
				{
					ans=i.second;
				}
				else if(i.second==xd)
				{
					ans=i.second-1;
				}
			}
		}
		cout << ans << endl;
	}
}