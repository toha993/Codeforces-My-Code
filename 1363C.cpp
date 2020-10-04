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
		int n,x;
		cin >> n >> x;
		vector<int>v[1005];
		for (int i = 0; i < n-1; ++i)
		{
			int p,q;
			cin >> p >> q;
			v[p].push_back(q);
			v[q].push_back(p);
		}
		if(v[x].size()<=1)
		{
			cout <<"Ayush" << endl;
			continue;
		}
		else
		{
			if((n-2)%2)
			{
				cout << "Ashish" << endl;
			}
			else
				cout << "Ayush" << endl;
		}
	}
}