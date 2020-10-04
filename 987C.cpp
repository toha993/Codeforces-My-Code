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

int a[10000],cost[10000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> cost[i];
	}
	int ans=1e9+5;
	for (int i = 0; i < n; ++i)
	{
		int gg=-1;
		int khrc=cost[i];
		for (int j = 0; j < i; ++j)
		{
			if(a[i]<=a[j])
				continue;
			else if(gg==-1 || cost[gg]>cost[j])
			{
				gg=j;
			}
		}
		if(gg==-1)
			continue;
		khrc +=cost[gg];
		gg=-1;
		for (int j=i+1; j < n; ++j)
		{
			if(a[i]>=a[j])
				continue;
			else if(gg==-1 || cost[gg]>cost[j])
				gg=j;
		}
		if(gg==-1)
			continue;
		khrc +=cost[gg];
		ans=min(ans,khrc);

	}
	if(ans==1e9+5)
	{
		cout << -1 << endl;
	}
	else
		cout << ans << endl;




}