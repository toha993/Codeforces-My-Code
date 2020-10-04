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
		vector<int>v;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			v.push_back(x);
			mp[x]=1;
		}

		int flag;
		for (int i = 1; i <= 1024; ++i)
		{
			flag=1;
			for (int j = 0; j < v.size(); ++j)
			{
				if(mp[v[j]^i]==0)
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				cout << i << endl;
				break;
			}
		}
		if(!flag)
		{
			cout <<  -1 << endl;
		}
	}
}