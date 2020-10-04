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
vector<int>path[500005];

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
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back({x,i+1});
	}
	sort(v.begin(),v.end());
	vector<int>wyn;
	int a[n]={0};
	for (int i = 0; i < v.size(); ++i)
	{
		int dx=v[i].first;
		int xd=v[i].second;
		int mn=0;
		for (int J = 0; J <path[xd].size(); ++J)
		{
			
			mn=max(mn,a[path[xd][J]]);
			if(a[path[xd][J]]==dx)
			{
				cout << -1 << endl;
				exit(0);
			}
		}
		if(mn !=dx-1)
		{
			cout << -1 << endl;
			exit(0);
		}
		a[xd]=dx;
		wyn.push_back(xd);
	}
	for (int i = 0; i < wyn.size(); i++)
	{
		cout << wyn[i] << " ";
	}
	cout << endl;

}