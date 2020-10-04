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
		vector<pair<int,int>>v;
		bool taken[200005]={0};
		for (int i = 0; i < n; ++i)
		{
			int  x;
			cin >> x;
			mp[x]++;
		}
		long long ans=0;
		for(auto i: mp)
		{
			v.push_back({i.second,i.first});
		}
		sort(v.begin(),v.end());
		int ck=v[v.size()-1].first;
		for (int i =v.size()-1;i>=0 ; --i)
		{
			if(ck==0)
				break;
			//cout << ck << " "  << v[i].first << " " <<  v[i].second << endl;
			if(v[i].first>=ck)
			{
				ans +=ck;
				ck--;
			}
			else
			{
				ans +=v[i].first;
				ck=v[i].first-1;
			}
		}
		cout << ans << endl;
	}
}