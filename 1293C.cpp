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
//solve

int main()
{
	int n,m;
	cin >> n >> m;
	map<int,map<int,int>>mp;
	int cnt=0;
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin >> x >> y;
		int a;
		if(x==1)
		{
			a=2;
		}
		else
			a=1;
		if(mp[x][y]==0)
		{
			mp[x][y]++;
		}
		else
			mp[x][y]=0;
		if(mp[x][y])
		{
			if(mp[a][y-1])
			{
				cnt++;
			}
			if(mp[a][y])
			{
				cnt++;
			}
			if(mp[a][y+1])
			{
				cnt++;
			}
		}
		else
		{
			if(mp[a][y-1])
			{
				cnt--;
			}
			if(mp[a][y])
			{
				cnt--;
			}
			if(mp[a][y+1])
			{
				cnt--;
			}
		}
		if(cnt==0)
		{
			cout  << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
}