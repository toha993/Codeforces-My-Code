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
		int mx=n;
		set<int>st;
		vector<int>v[200005];
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			st.insert(x);
			v[x].push_back(i+1);
		}
		if(st.size()==n)
		{
			cout << -1 << endl;
			continue;
		}
		for(auto it : st)
		{
			for (int i = 0; i <v[it].size()-1; i++)
			{
				mx=min(mx,v[it][i+1]-v[it][i]+1);
			}
		}
		cout << mx << endl;
	}
}