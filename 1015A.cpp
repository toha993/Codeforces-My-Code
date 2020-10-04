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
	int n,m,mn=101,mx=0;
	cin >> n >> m;
	int a[105]={0};
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin >>  x >> y;

		for (int i = x; i <=y ; ++i)
		{
			a[i]=1;
		}
	}
	vector<int>v;
	for (int i = 1; i <=m ; ++i)
	{
		if(a[i]==0)
		{
			v.push_back(i);
		}
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}