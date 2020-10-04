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
vector<int>path[500005],color[50005];

int main()
{
	int n,m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{	
		int x,y;
		cin >> x >> y;
		path[x].push_back(y);
		path[y].push_back(x);
	}
	vector<pair<int,int>>v;
	int a[n+5];
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		a[i+1]=x;
		if(x>n)
		{
			cout << -1 << endl;
				exit(0);
		}
		v.push_back({x,i+1});
	}
	sort(v.begin(),v.end());
	vector<int>wyn;
	for (int i = 0; i <n; ++i)
	{
		int xd=v[i].second;
		int mn=0;
		set<int>st;
		for (int J = 0; J <path[xd].size(); ++J)
		{
			if(a[path[xd][J]]<a[xd])
				st.insert(a[path[xd][J]]);
			if(a[path[xd][J]]==a[xd])
			{
				cout << -1 << endl;
				exit(0);
			}
		}
		if(st.size() != a[xd]-1)
		{
				cout << -1 << endl;
				exit(0);
		}
		//a[xd]=dx;
		//color[xd].push_back(dx);
		wyn.push_back(xd);
	}
	for (int i = 0; i < wyn.size(); i++)
	{
		cout << wyn[i] << " ";
	}
	cout << endl;

}