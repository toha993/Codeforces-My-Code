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
		vector<int>v[5005];
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			v[x].push_back(i);
		}
		int ans=0;
		for (int i = 1; i <=n; ++i)
		{
			if(!v[i].empty())
			for (int j = 0; j < v[i].size()-1; ++j)
			{
				if(v[i][v[i].size()-1]-v[i][j]>1)
				{
					ans=1;
					break;
				}
			}
			if(ans)
				break;
		}
		if(ans)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}