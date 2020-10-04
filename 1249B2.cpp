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
		int found[n+5]={0};
		int ans[n+5]={0};
		int a[n];
		for (int i = 1; i <= n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 1; i <=n; ++i)
		{
			if(!found[i])
			{
				vector<int>v;
				while(!found[i])
				{
					v.push_back(i);
					found[i]=1;
					i=a[i];
				}
				for (auto pq : v)
				{
					ans[pq]=v.size();
				}
			}
		}
		for (int i = 1; i <=n; ++i)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}