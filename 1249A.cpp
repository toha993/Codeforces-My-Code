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
		int x;
		cin >> x;
		map<int,int>mp;
		int flag=0;
		for (int i = 0; i < x; ++i)
		{
			int g;
			cin >> g;
			mp[g]=1;
			if(mp[g-1]==1 || mp[g+1]==1)
			{
				flag=1;
			}
		}
		if(flag)
			cout << 2 << endl;
		else
			cout << 1 << endl; 
	}
}