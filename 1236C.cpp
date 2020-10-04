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
	int n;
	cin >> n;
	int k=n*n;
	int ck=1;
	vector<int>v[305];
	for (int i = 1; i <= n; ++i)
	{
		if(i%2)
		for (int j = 1; j <= n; ++j)
		{
			v[j].push_back(ck++);
		}
		else
			for (int j = n; j>=1; --j)
		{
			v[j].push_back(ck++);
		}

	}
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}