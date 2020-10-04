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

int a[100005];
int main()
{
	map<int,int>mp;
	vector<pair<int,int>>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]] +=a[i];
	}
	for(auto i : mp)
	{
		v.push_back({i.second,i.first});
	}
	sort(v.begin(),v.end(),greater<>());
	long long ans=0;
	for (int i = 0; i < v.size(); ++i)
	{
		if(mp[v[i].second] !=0 )
			{
				ans +=mp[v[i].second];
				mp[v[i].second+1]=0;
				mp[v[i].second-1]=0;
			}
	}
	cout << ans << endl;
}